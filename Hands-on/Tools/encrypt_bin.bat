@ECHO off

SET SCRIPT_DIR=%~dp0

SET ENCRYPTION_KEY=%3
SET IV=%4
SET INPUTFILE_PATH=%1
ECHO "Input path %INPUTFILE_PATH%"
SET INPUTFILE_NAME=%2
ECHO "Input file name %INPUTFILE_NAME%"
SET SCRIPT_DIR=%~dp0
SET CLEANUP=1
SET APPLICATION_ADDRESS=%5



SET OPENSSL=%SCRIPT_DIR%\OpenSSL-Win64\openssl
SET REVERSE_BYTE_UTILITY=%SCRIPT_DIR%\ReverseByteUtility\reverse_byte_in_binary.exe

SET SRECCAT=%SCRIPT_DIR%\Srecord\srec_cat.exe

SET PROGRAMMER=%SCRIPT_DIR%\stm32cubeprogrammer\bin\STM32_Programmer_CLI.exe
SET LOADER=%SCRIPT_DIR%\stm32cubeprogrammer\bin\ExternalLoader\MX25LM51245G_STM32H735G-DK.stldr

ECHO "######################## BINARY ENCRYPTION START"

%REVERSE_BYTE_UTILITY%  %INPUTFILE_PATH%\%INPUTFILE_NAME%.bin %INPUTFILE_PATH%\%INPUTFILE_NAME%_byte_swapped.bin
ECHO "######################## ENCRYPTION START"
ECHO "openssl enc -aes-128-ctr -K %ENCRYPTION_KEY% -iv %IV%"
ECHO "######################## ENCRYPTION END"

%OPENSSL% enc -aes-128-ctr -K %ENCRYPTION_KEY% -iv %IV%   -nosalt -nopad -in %INPUTFILE_PATH%\%INPUTFILE_NAME%_byte_swapped.bin -out %INPUTFILE_PATH%\%INPUTFILE_NAME%_byte_swapped_encrypted.bin

%REVERSE_BYTE_UTILITY%  %INPUTFILE_PATH%\%INPUTFILE_NAME%_byte_swapped_encrypted.bin  %INPUTFILE_PATH%\%INPUTFILE_NAME%_encrypted.bin
if %CLEANUP% == 1 (
ECHO "######################## CLEANUP Temporary files
del %INPUTFILE_PATH%\%INPUTFILE_NAME%_byte_swapped.bin
del %INPUTFILE_PATH%\%INPUTFILE_NAME%_byte_swapped_encrypted.bin
)
ECHO "######################## BINARY ENCRYPTION END"

ECHO "######################## Create hex file"
%SRECCAT% %INPUTFILE_PATH%\%INPUTFILE_NAME%_encrypted.bin -Binary -offset 0x%APPLICATION_ADDRESS% -o %INPUTFILE_PATH%\%INPUTFILE_NAME%_encrypted.hex -Intel 
ECHO "######################## Create hex file end"

ECHO "######################## Flash OSPI"
%PROGRAMMER% -c port=SWD -w %INPUTFILE_PATH%\%INPUTFILE_NAME%_encrypted.hex -el %LOADER%
ECHO "######################## Flash OSPI end"

