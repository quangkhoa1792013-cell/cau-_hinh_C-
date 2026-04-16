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
echo %Y%[*] Dang do tham GitHub...%W%
git fetch origin main --quiet

echo.
echo %C%--- DANH SACH CHI TIET TU CLOUD: ---%W%
for /f "tokens=1*" %%a in ('git --no-pager diff --name-status main origin/main') do (
  set "st=%%a"
  set "display=%P%[KHONG XAC DINH]%W%"
  if "!st!"=="M" set "display=%Y%[DA SUA]%W%"
  if "!st!"=="A" set "display=%G%[THEM MOI]%W%"
  if "!st!"=="D" set "display=%R%[DA XOA]%W%"
  if "!st!"=="R" set "display=%B%[DOI TEN]%W%"
  if "!st!"=="C" set "display=%B%[SAO CHEP]%W%"
  if "!st!"=="U" set "display=%R%[XUNG DOT]%W%"
  echo  !display! %%b
)
echo.
echo %C%--- THONG KE DONG CODE (++ --): ---%W%
git --no-pager diff --stat main origin/main
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
echo.
echo %C%--- TINH TRANG TOAN BO FILE: ---%W%
:: Dung --porcelain de lay trang thai chuan nhat
for /f "tokens=1,2*" %%a in ('git status --porcelain') do (
  set "st=%%a"
  set "file=%%b %%c"
  set "display=%P%[KHONG XAC DINH]%W%"
  
  :: Kiem tra cac trang thai cua Git
  if "!st!"=="M"  set "display=%Y%[DA SUA]%W%"
  if "!st!"=="A"  set "display=%G%[THEM MOI]%W%"
  if "!st!"=="D"  set "display=%R%[DA XOA]%W%"
  if "!st!"=="R"  set "display=%B%[DOI TEN]%W%"
  if "!st!"=="C"  set "display=%B%[SAO CHEP]%W%"
  if "!st!"=="UU" set "display=%R%[XUNG DOT]%W%"
  if "!st!"=="??" set "display=%C%[FILE LA]%W%"
  
  echo  !display! !file!
)
echo.
echo %C%--- CHI TIET THAY DOI (++ --): ---%W%
git --no-pager diff --stat --cached
echo.
set "HAS_CHANGE="
for /f "tokens=*" %%a in ('git status --porcelain') do set "HAS_CHANGE=YES"
if not defined HAS_CHANGE (
  echo %R%[!] Khong co thay doi de Push.%W%
  pause & goto menu
)
set /p msg=" %C%[>] Ghi chu chien dich: %W%"
if "!msg!"=="" set msg=Update v16.0: %date% %time%
echo.
echo %P%[*] Dang day code len GitHub...%W%
git commit -m "!msg!" --quiet
git push origin main --force --quiet
set "STAT_OP=%G%THANH CONG%W%"

:FINISH
set "END_TIME=%time%"
echo.
echo %C%==========================================================%W%
echo %C%  BANG TONG KET CHIEN DICH v15.0  %W%
echo %C%==========================================================%W%
echo.
echo  [+] Bat dau:  %START_TIME%
echo  [+] Ket thuc:  %END_TIME%
echo.
echo  [+] Trang thai: %STAT_OP%
echo  [+] Repository: %P%cau-_hinh_C-%W%
echo  [+] Branch:  %Y%main%W%
echo.
echo %C%==========================================================%W%
echo.
pause
goto menu
