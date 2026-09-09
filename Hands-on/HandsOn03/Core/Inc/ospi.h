/* Includes ------------------------------------------------------------------*/
#include "main.h"
/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/

/* Identification Operations */
#define READ_ID_CMD                             0x9F
#define READ_SERIAL_FLASH_DISCO_PARAM_CMD       0x5A

/* Program Operations */
#define PAGE_PROG_CMD                           0x02

#define RESET_ENABLE_CMD                        0x66
#define RESET_MEMORY_CMD                        0x99

/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/

/* Private functions ---------------------------------------------------------*/
uint32_t OSPI_Init(void);
uint32_t OSPI_MemoryMap(void);
uint32_t OTFDEC_Init(void);
