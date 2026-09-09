SET SCRIPT_DIR=%~dp0

SET PROGRAMMER=%SCRIPT_DIR%\stm32cubeprogrammer\bin\STM32_Programmer_CLI.exe
SET LOADER=%SCRIPT_DIR%\stm32cubeprogrammer\bin\ExternalLoader\MX25LM51245G_STM32H735G-DK.stldr

ECHO "######################## Flash OSPI"
%PROGRAMMER% -c port=SWD -w %SCRIPT_DIR%\test_hex.hex -el %LOADER%
ECHO "######################## Flash OSPI end"

pause