@echo off
cd /d "%~dp0"
g++ -std=c++17 -o demo demo.cpp
if %errorlevel% neq 0 (
    echo Compilation failed!
    pause
    exit /b 1
)
echo Compilation successful!
./demo.exe < input.txt > output.txt
echo.
echo Output:
type output.txt
pause
