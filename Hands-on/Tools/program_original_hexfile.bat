:: STM32CubeProgrammer Utility flash script

@ECHO OFF
@setlocal
::COLOR 0B

:: Current Directory
@SET CUR_DIR=%CD%

:: Chip Name
@SET CHIP_NAME=STM32H735G
@SET CHIP_NAME2=STM32H725G
:: Main Board
@SET MAIN_BOARD=-DK
:: Demo Name
@SET DEMO_NAME=STM32Cube_Demo
:: Demo Version
@SET DEMO_VER=V1.0.0
:: Hex filename
@SET HEX_FILE="%DEMO_NAME%-%CHIP_NAME%%MAIN_BOARD%-%DEMO_VER%.hex"
@IF NOT EXIST "%HEX_FILE%" @SET HEX_FILE=%DEMO_NAME%-%CHIP_NAME%%MAIN_BOARD%-%DEMO_VER%_FULL.hex
@IF NOT EXIST "%HEX_FILE%" @ECHO %HEX_FILE% Does not exist !! && GOTO goError

TITLE STM32CubeProgrammer Utility for %CHIP_NAME%%MAIN_BOARD%

SET SCRIPT_DIR=%~dp0

:: Board ID
@SET BOARD_ID=0
:: External Loader Name
@SET EXT_LOADER=MX25LM51245G_%CHIP_NAME%%MAIN_BOARD%
@SET EXT_LOADER2=MX25LM51245G_%CHIP_NAME2%%MAIN_BOARD%
@SET STM32_PROGRAMMER_PATH="%SCRIPT_DIR%stm32cubeprogrammer\bin\STM32_Programmer_CLI.exe"
@SET STM32_EXT_FLASH_LOADER=%SCRIPT_DIR%\stm32cubeprogrammer\bin\ExternalLoader\MX25LM51245G_STM32H735G-DK.stldr



TITLE STM32CubeProgrammer Utility for %CHIP_NAME%%MAIN_BOARD%

:: Add STM32CubeProgrammer to the PATH
@SET PATH=%STM32_PROGRAMMER_PATH%;%PATH%

@ECHO.
@ECHO =================================================
@ECHO Erase and Flash all memories and reboot the board
@ECHO =================================================
@ECHO. 
STM32_Programmer_CLI.exe -c port=SWD index=%BOARD_ID% reset=HWrst -el %STM32_EXT_FLASH_LOADER% -e all -d %HEX_FILE% -HardRst
@IF NOT ERRORLEVEL 0 (
  @GOTO goError
)

@GOTO goOut

:goError
@SET RETERROR=%ERRORLEVEL%
@COLOR 0C
@ECHO.
@ECHO Failure Reason Given is %RETERROR%
@PAUSE
@COLOR 07
@EXIT /b %RETERROR%

:goOut
