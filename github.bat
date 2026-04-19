@echo off
setlocal enabledelayedexpansion
title HE THONG TONG DEPLOY v16.0 - TOTAL STATUS

:: --- DINH NGHIA MA MAU ANSI ---
for /F "tokens=1,2 delims=#" %%a in ('"prompt #$H#$E# & echo on & for %%b in (1) do rem"') do set "ESC=%%b"
set "G=%ESC%[92m" & set "Y=%ESC%[93m" & set "B=%ESC%[94m" & set "P=%ESC%[95m" & set "C=%ESC%[96m" & set "R=%ESC%[91m" & set "W=%ESC%[0m"

:menu
cls
color 07
echo %C%==========================================================%W%
echo %C%  HE THONG QUAN LY CODE v16.0 (KHOA TA)  %W%
echo %C%==========================================================%W%
echo.
echo  %B%[1]%W% LAY CODE VE (PULL) - Chien dich Phuc hoi
echo  %B%[2]%W% DAY CODE LEN (PUSH) - Chien dich Trien khai
echo  %B%[3]%W% THOAT (EXIT)
echo.
echo %C%==========================================================%W%
set /p choice=" %C%[>] Chon lenh (1-3): %W%"

if "%choice%"=="1" goto pull_code
if "%choice%"=="2" goto push_code
if "%choice%"=="3" exit
goto menu

:check_git
git rev-parse --is-inside-work-tree >nul 2>&1 || (git init --quiet && git branch -M main)
git remote | findstr "origin" >nul || git remote add origin https://github.com/quangkhoa1792013-cell/cau-_hinh_C-.git
exit /b

:pull_code
set "START_TIME=%time%"
cls
echo %Y%==========================================================%W%
echo %Y%  CHIEN DICH PHUC HOI DU LIEU (PULL)  %W%
echo %Y%==========================================================%W%
call :check_git
echo [+] Dang lay code moi tu GitHub ve...

:: Lay du lieu tu server ve truoc
git fetch origin main

:: Kiem tra xem nhanh hien tai co commit nao chua
git rev-parse HEAD >nul 2>&1
if %errorlevel% neq 0 (
    echo [!] Nhanh moi - Dang thiet lap du lieu ban dau...
    git reset --hard origin/main
) else (
    echo [+] Dang cap nhat code...
    git add .
    git stash
    git pull origin main --rebase
    git stash pop
)

echo.
set "CHECK_PULL="
for /f "tokens=*" %%i in ('git diff main origin/main') do set "CHECK_PULL=YES"
if not defined CHECK_PULL (
  echo %G%[OK] May ban da la moi nhat.%W%
  pause & goto menu
)
git add . >nul 2>&1
git stash >nul 2>&1
git pull origin main --rebase --quiet
git stash pop >nul 2>&1
set "STAT_OP=%G%THANH CONG%W%"
goto :FINISH

:push_code
set "START_TIME=%time%"
cls
echo %G%==========================================================%W%
echo %G%  CHIEN DICH TRIEN KHAI CODE (PUSH)  %W%
echo %G%==========================================================%W%
call :check_git
echo %B%[*] Dang quet file da sua doi...%W%
git add .
set "msg="
set /p msg="Nhap tin nhan commit (Enter de bo qua): "
if "!msg!"=="" set msg=Update code %date% %time%

git commit -m "!msg!"
git push origin main

if %errorlevel% neq 0 (
    echo [!] Xung dot - Dang thuc hien Force Push...
    git push origin main --force
)

echo.
pause
goto menu
