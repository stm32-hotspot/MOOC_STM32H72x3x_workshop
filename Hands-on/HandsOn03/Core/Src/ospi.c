
/* Includes ------------------------------------------------------------------*/
#include "ospi.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
#define START_ADRESS_OCOTOSPI1                   0x90000000
#define START_ADRESS_OTFDEC1_REGION1             0x90000000
#define END_ADRESS_OTFDEC1_REGION1               0x93FFFFFF
#define VERSION_NUMBER                           1
#define REGION1                                  1

#define OCTAL_IO_STR_READ_CMD                    0xEC13
#define OCTAL_IO_DTR_READ_CMD                    0xEE11
#define OCTAL_PAGE_PROG_CMD                      0x12ED
#define WRITE_ENABLE_CMD                         0x06
#define READ_STATUS_REG_CMD                      0x05
#define WRITE_CFG_REG_2_CMD                      0x72
#define DUMMY_CLOCK_CYCLES_READ_OCTAL            20
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
OTFDEC_RegionConfigTypeDef Config;
OSPI_HandleTypeDef OSPIHandle ;
OTFDEC_HandleTypeDef hotfdec;
OSPI_MemoryMappedTypeDef sMemMappedCfg;
uint32_t OSPIAddressMode;
uint32_t OSPIDataMode;

uint32_t Key[4] =     { 0x12345678, 0x0, 0x0, 0x0 };
uint32_t Nonce[2]       =    {0xA5A5A5A5, 0xC3C3C3C3};

/* Private function prototypes -----------------------------------------------*/
static void OSPI_ResetMemory(void);
void OSPI_OctalStrModeCfg(OSPI_HandleTypeDef *hospi);
/* Private functions ---------------------------------------------------------*/

uint32_t OSPI_Init()
{
  uint8_t id[20];

  OSPI_RegularCmdTypeDef  sCommand;

  OSPIHandle.Instance = OCTOSPI1;
  HAL_OSPI_DeInit(&OSPIHandle);

  OSPIHandle.Init.FifoThreshold         = 32;
  OSPIHandle.Init.DualQuad              = HAL_OSPI_DUALQUAD_DISABLE;
  OSPIHandle.Init.MemoryType            = HAL_OSPI_MEMTYPE_MACRONIX;
  OSPIHandle.Init.DeviceSize            = 26;
  OSPIHandle.Init.ChipSelectHighTime    = 2;
  OSPIHandle.Init.FreeRunningClock      = HAL_OSPI_FREERUNCLK_DISABLE;
  OSPIHandle.Init.ClockMode             = HAL_OSPI_CLOCK_MODE_0;
  OSPIHandle.Init.WrapSize              = HAL_OSPI_WRAP_NOT_SUPPORTED;
  OSPIHandle.Init.ClockPrescaler        = 0x3;
  OSPIHandle.Init.SampleShifting        = HAL_OSPI_SAMPLE_SHIFTING_NONE;
  OSPIHandle.Init.DelayHoldQuarterCycle = HAL_OSPI_DHQC_ENABLE;
  OSPIHandle.Init.ChipSelectBoundary    = 0;

  if (HAL_OSPI_Init(&OSPIHandle) != HAL_OK)
  {
    Error_Handler();
  }

  OSPI_ResetMemory();/*reset OSPI memory*/

  /* read ospi memory ID */
  sCommand.OperationType         = HAL_OSPI_OPTYPE_COMMON_CFG;
  sCommand.FlashId               = HAL_OSPI_FLASH_ID_1;
  sCommand.InstructionMode       = HAL_OSPI_INSTRUCTION_1_LINE;
  sCommand.InstructionSize       = HAL_OSPI_INSTRUCTION_8_BITS;
  sCommand.InstructionDtrMode    = HAL_OSPI_INSTRUCTION_DTR_DISABLE;
  sCommand.AddressDtrMode        = HAL_OSPI_ADDRESS_DTR_DISABLE;
  sCommand.AlternateBytes        = 0x00;
  sCommand.AlternateBytesMode    = HAL_OSPI_ALTERNATE_BYTES_NONE;
  sCommand.AlternateBytesSize    = HAL_OSPI_ALTERNATE_BYTES_8_BITS;
  sCommand.AlternateBytesDtrMode = HAL_OSPI_ALTERNATE_BYTES_DTR_DISABLE;
  sCommand.DataDtrMode           = HAL_OSPI_DATA_DTR_DISABLE;
  sCommand.DummyCycles           = 0;
  sCommand.DQSMode               = HAL_OSPI_DQS_DISABLE;
  sCommand.SIOOMode              = HAL_OSPI_SIOO_INST_EVERY_CMD;

  sCommand.Instruction           = READ_ID_CMD;
  sCommand.AddressMode           = HAL_OSPI_ADDRESS_NONE;
  sCommand.NbData                = 20;
  sCommand.DataMode              = OSPIDataMode;
  /*send cmd to read ID*/
  if (HAL_OSPI_Command(&OSPIHandle, &sCommand, HAL_OSPI_TIMEOUT_DEFAULT_VALUE) != HAL_OK)
  {
    Error_Handler();
  }
  /*receive the ID*/
  if (HAL_OSPI_Receive(&OSPIHandle, id, HAL_OSPI_TIMEOUT_DEFAULT_VALUE) != HAL_OK)
  {
    Error_Handler();
  }

  OSPI_OctalStrModeCfg(&OSPIHandle);/*set OSPI mode to 8bit DTR*/
  
  return 0;
}

/**
* @brief  This function reset the OSPI memory.
* @param  None
* @retval None
*/
static void OSPI_ResetMemory(void)
{
  OSPI_RegularCmdTypeDef  sCommand;

  /* Initialize the reset enable command */
  sCommand.OperationType         = HAL_OSPI_OPTYPE_COMMON_CFG;
  sCommand.FlashId               = HAL_OSPI_FLASH_ID_1;
  sCommand.InstructionMode       = HAL_OSPI_INSTRUCTION_1_LINE;
  sCommand.InstructionSize       = HAL_OSPI_INSTRUCTION_8_BITS;
  sCommand.InstructionDtrMode    = HAL_OSPI_INSTRUCTION_DTR_DISABLE;
  sCommand.AddressMode           = HAL_OSPI_ADDRESS_NONE;
  sCommand.AlternateBytesMode    = HAL_OSPI_ALTERNATE_BYTES_NONE;
  sCommand.DataDtrMode           = HAL_OSPI_DATA_DTR_DISABLE;
  sCommand.DummyCycles           = 0;
  sCommand.DQSMode               = HAL_OSPI_DQS_DISABLE;
  sCommand.SIOOMode              = HAL_OSPI_SIOO_INST_EVERY_CMD;
  sCommand.DataMode              = HAL_OSPI_DATA_NONE;

  sCommand.Instruction = RESET_ENABLE_CMD;
  /* Send the command */
  if (HAL_OSPI_Command(&OSPIHandle, &sCommand, HAL_OSPI_TIMEOUT_DEFAULT_VALUE) != HAL_OK)
  {
    Error_Handler();
  }


  /* Send the reset memory command */
  sCommand.Instruction = RESET_MEMORY_CMD;
  if (HAL_OSPI_Command(&OSPIHandle, &sCommand, HAL_OSPI_TIMEOUT_DEFAULT_VALUE) != HAL_OK)
  {
    Error_Handler();
  }

  HAL_Delay(40);
}


/**
* @brief  This function set memory mapped mode.
* @param  None
* @retval None
*/
uint32_t OSPI_MemoryMap(void)
{

  OSPI_RegularCmdTypeDef   sCommand;
  OSPI_MemoryMappedTypeDef sMemMappedCfg;

  /* Initialize the command */
  sCommand.OperationType         = HAL_OSPI_OPTYPE_COMMON_CFG;
  sCommand.Instruction           = OCTAL_PAGE_PROG_CMD;
  sCommand.FlashId               = HAL_OSPI_FLASH_ID_1;
  sCommand.InstructionMode       = HAL_OSPI_INSTRUCTION_8_LINES;
  sCommand.InstructionSize       = HAL_OSPI_INSTRUCTION_16_BITS ;
  sCommand.InstructionDtrMode    = HAL_OSPI_INSTRUCTION_DTR_ENABLE;
  sCommand.AddressDtrMode        = HAL_OSPI_ADDRESS_DTR_ENABLE;
  sCommand.AlternateBytes        = 0x00;
  sCommand.AlternateBytesMode    = HAL_OSPI_ALTERNATE_BYTES_NONE;
  sCommand.AlternateBytesSize    = HAL_OSPI_ALTERNATE_BYTES_8_BITS;
  sCommand.AlternateBytesDtrMode = HAL_OSPI_ALTERNATE_BYTES_DTR_ENABLE;
  sCommand.DataDtrMode           = HAL_OSPI_DATA_DTR_ENABLE;
  sCommand.DummyCycles           = 0;
  sCommand.DQSMode               = HAL_OSPI_DQS_ENABLE;
  sCommand.SIOOMode              = HAL_OSPI_SIOO_INST_EVERY_CMD;

  if (HAL_OSPI_SetFifoThreshold(&OSPIHandle, 4) != HAL_OK)
  {
    Error_Handler();
  }

  sCommand.OperationType = HAL_OSPI_OPTYPE_WRITE_CFG;
  sCommand.Instruction   = OCTAL_PAGE_PROG_CMD;
  sCommand.AddressMode   = HAL_OSPI_ADDRESS_8_LINES;
  sCommand.AddressSize   = HAL_OSPI_ADDRESS_32_BITS;
  sCommand.DataMode      = HAL_OSPI_DATA_8_LINES;
  sCommand.DummyCycles   = 0;

  if (HAL_OSPI_Command(&OSPIHandle, &sCommand, HAL_OSPI_TIMEOUT_DEFAULT_VALUE) != HAL_OK)
  {
    Error_Handler();
  }

  sCommand.OperationType      = HAL_OSPI_OPTYPE_READ_CFG;
  sCommand.Instruction        = OCTAL_IO_DTR_READ_CMD;
  sCommand.AddressMode        = HAL_OSPI_ADDRESS_8_LINES;
  sCommand.AlternateBytesMode = HAL_OSPI_ALTERNATE_BYTES_NONE;
  sCommand.DataMode           = HAL_OSPI_DATA_8_LINES;
  sCommand.DummyCycles        = DUMMY_CLOCK_CYCLES_READ_OCTAL;

  if (HAL_OSPI_Command(&OSPIHandle, &sCommand, HAL_OSPI_TIMEOUT_DEFAULT_VALUE) != HAL_OK)
  {
    Error_Handler();
  }

  sMemMappedCfg.TimeOutActivation = HAL_OSPI_TIMEOUT_COUNTER_DISABLE;
  sMemMappedCfg.TimeOutPeriod     = 0x20;

  if (HAL_OSPI_MemoryMapped(&OSPIHandle, &sMemMappedCfg))
  {
    Error_Handler();
  }

  return 0;
}

void OSPI_OctalStrModeCfg(OSPI_HandleTypeDef *hospi)
{
  uint8_t reg;
  OSPI_RegularCmdTypeDef  sCommand;
  OSPI_AutoPollingTypeDef sConfig;

  sCommand.OperationType      = HAL_OSPI_OPTYPE_COMMON_CFG;
  sCommand.FlashId            = HAL_OSPI_FLASH_ID_1;
  sCommand.InstructionMode    = HAL_OSPI_INSTRUCTION_1_LINE;
  sCommand.InstructionSize    = HAL_OSPI_INSTRUCTION_8_BITS;
  sCommand.InstructionDtrMode = HAL_OSPI_INSTRUCTION_DTR_DISABLE;
  sCommand.AddressDtrMode     = HAL_OSPI_ADDRESS_DTR_DISABLE;
  sCommand.AlternateBytesMode = HAL_OSPI_ALTERNATE_BYTES_NONE;
  sCommand.DataDtrMode        = HAL_OSPI_DATA_DTR_DISABLE;
  sCommand.DummyCycles        = 0;
  sCommand.DQSMode            = HAL_OSPI_DQS_DISABLE;
  sCommand.SIOOMode           = HAL_OSPI_SIOO_INST_EVERY_CMD;

  sConfig.MatchMode           = HAL_OSPI_MATCH_MODE_AND;
  sConfig.AutomaticStop       = HAL_OSPI_AUTOMATIC_STOP_ENABLE;
  sConfig.Interval            = 0x10;


  /* Enable write operations */
  sCommand.Instruction = WRITE_ENABLE_CMD;
  sCommand.DataMode    = HAL_OSPI_DATA_NONE;
  sCommand.AddressMode = HAL_OSPI_ADDRESS_NONE;

  if (HAL_OSPI_Command(&OSPIHandle, &sCommand, HAL_OSPI_TIMEOUT_DEFAULT_VALUE) != HAL_OK)
  {
    Error_Handler();
  }

  /* Reconfigure OSPI to automatic polling mode to wait for write enabling */
  sConfig.Match           = 0x02;
  sConfig.Mask            = 0x02;

  sCommand.Instruction    = READ_STATUS_REG_CMD;
  sCommand.DataMode       = HAL_OSPI_DATA_1_LINE;
  sCommand.NbData         = 1;

  if (HAL_OSPI_Command(&OSPIHandle, &sCommand, HAL_OSPI_TIMEOUT_DEFAULT_VALUE) != HAL_OK)
  {
    Error_Handler();
  }

  if (HAL_OSPI_AutoPolling(&OSPIHandle, &sConfig, HAL_OSPI_TIMEOUT_DEFAULT_VALUE) != HAL_OK)
  {
    Error_Handler();
  }

  /* Write Configuration register 2 (with Octal I/O SPI protocol) */
  sCommand.Instruction = WRITE_CFG_REG_2_CMD;
  sCommand.AddressMode = HAL_OSPI_ADDRESS_1_LINE;
  sCommand.AddressSize = HAL_OSPI_ADDRESS_32_BITS;

  sCommand.Address = 0;
  reg = 0x2;/*0x1 to enable ospi STR mode, 0x2 to enable ospi DTR mode*/ 


  if (HAL_OSPI_Command(&OSPIHandle, &sCommand, HAL_OSPI_TIMEOUT_DEFAULT_VALUE) != HAL_OK)
  {
    Error_Handler();
  }

  if (HAL_OSPI_Transmit(&OSPIHandle, &reg, HAL_OSPI_TIMEOUT_DEFAULT_VALUE) != HAL_OK)
  {
    Error_Handler();
  }

  HAL_Delay(40);

}


uint32_t OTFDEC_Init(){
  /*Init OTFDEC*/
  hotfdec.Instance = OTFDEC1;
  HAL_OTFDEC_DeInit(&hotfdec);

  if (HAL_OTFDEC_Init(&hotfdec) != HAL_OK)
  {
    Error_Handler();
  }
  __HAL_OTFDEC_ENABLE_IT(&hotfdec, OTFDEC_ALL_INT);

  /* Set OTFDEC Mode */
  if (HAL_OTFDEC_RegionSetMode(&hotfdec, REGION1, OTFDEC_REG_MODE_INSTRUCTION_OR_DATA_ACCESSES) != HAL_OK)
  {
    Error_Handler();
  }

  /* Set OTFDEC Key */
  if (HAL_OTFDEC_RegionSetKey(&hotfdec,REGION1, Key) != HAL_OK)
  {
    Error_Handler();
  }

  /* Configure and lock region,enable OTFDEC decryption */
  Config.Nonce[0]     = 0xA5A5A5A5;
  Config.Nonce[1]     = 0xC3C3C3C3;
  Config.StartAddress = START_ADRESS_OTFDEC1_REGION1;
  Config.EndAddress   = END_ADRESS_OTFDEC1_REGION1;
  Config.Version      = 0xABCD;
  if (HAL_OTFDEC_RegionConfig(&hotfdec, REGION1, &Config, OTFDEC_REG_CONFIGR_LOCK_ENABLE) != HAL_OK)
  {
    Error_Handler();
  }
  return 0;
}
