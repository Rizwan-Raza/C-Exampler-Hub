@echo off
color 0a
prompt Rex:$g 
REM runs only if gcc command is added to the path variable
:label
cls
gcc -Irizzu Rizwan.c -o Rizwan
pause 
Rizwan
echo Want to Run it again ? If Yes, Press any key else Ctrl+C or close this window
pause >nul
goto label