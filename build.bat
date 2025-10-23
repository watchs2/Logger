@echo off
cls
title Compilação do Projeto

:: Configurações
set SRC=examples/main.c src/logger.c
set OUT_DIR=out
set OUT_EXE=%OUT_DIR%\main.exe

:: Cria Pasta de out
if not exist "%OUT_DIR%" (
    echo A criar diretório de saída "%OUT_DIR%"...
    mkdir "%OUT_DIR%"
)

echo.
echo A compilar o projeto...
gcc %SRC% -o %OUT_EXE%
if %errorlevel% neq 0 (
    echo.
    echo [ERRO] Falha na compilação!
    pause
    exit /b %errorlevel%
)

echo.
echo [SUCESSO] Build realizado com sucesso!
echo -------------------------------------


cd "%OUT_DIR%"
main.exe

echo.
cd ..
pause
