
/*
Ruben Agostinho

Objetivo:

Criar um sistema de loggs util:
Tem de ser possivel usar em mais do que um sitema operativo
Tem de ser singleton ou seja evitar multiplas inicializações do logger
Acessivel em qualquer lado

é possivel ativar ou desativar o debugger
E tem de ser um sistema seguro
*/

#ifndef LOGGER_H
#define LOGGER_H

typedef enum{
    LOG_TYPE_INFO,
    LOG_TYPE_WARN,
    LOG_TYPE_ERROR,
    LOG_TYPE_DEBUG,
} TypeLog;

//iniciar o logger


//fechar o logger


#endif