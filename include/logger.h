
/*
Ruben Agostinho

Objetivo:

Criar um sistema de loggs util:
Tem de ser possivel usar em mais do que um sitema operativo
Tem de ser singleton ou seja evitar multiplas inicializações do logger
Acessivel em qualquer lado

é possivel ativar ou desativar o debugger
*/

#ifndef LOGGER_H
#define LOGGER_H

#include <stdio.h>



//MACROS DE CORES
#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

//MACRO de Logs
#define LOG_INFO(message) log_main(INFO_LOG , message)
#define LOG_ERROR(message) log_main(ERROR_LOG , message)
#define LOG_WARN(message) log_main(WARN_LOG , message)
#define LOG_DEBUG(message) log_main(DEBUG_LOG , message)



//Struct de configuração do Log
typedef struct{
    int enable_debug;                    //0-> Não aceita 1-> aceita
    int enable_timestamp;                //0-> Não aceita 1-> aceita
    int enable_file_logging;             //0-> Não aceita 1-> aceita
    const char* filepath;
                                        //TODO
                                        //segurança para multi thread enviroment
                                        //output das coisas consola normal ou str
}LogConfig;

//Todos os tipos de logs
enum log_types{
    INFO_LOG,                          
    WARN_LOG,                            
    ERROR_LOG,         

    DEBUG_LOG, 
};


//Função para iniciar log com config
void log_init(LogConfig* config);
//Função para fechar o log
void log_close(void);
//Vai receber o tipo de log , e mensagem
void log_main(int type,const char* message);


#endif