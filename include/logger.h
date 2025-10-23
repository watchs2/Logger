
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

#include <stdio.h>

//MACROS DE CORES

#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"



//Struct de configuração do Log
typedef struct{
    int enable_debug;  //0-> Não aceita 1-> aceita
    int enable_timestamp;  //0-> Não aceita 1-> aceita
    int enable_file_logging; //0-> Não aceita 1-> aceita
    const char* filepath;
    //TODO
    //segurança para multi thread enviroment
    //output das coisas consola normal ou str
}LogConfig;

//Todos os tipos de logs que temos
enum log_types{

    INFO_LOG, //0
    WARN_LOG, //1
    ERROR_LOG, //2

    DEBUG_LOG, // 3
};


//Função para iniciar log com config
void log_init(LogConfig* config);
//Função para fechar o log
void log_close(void);

/*
Função principal de logs
tentar usar um simples LOG_INFO("Hello"); e output [INFO] - hello

*/
//Vai receber o tipo de log , e mensagem
void log_main(const char* message);


//MACRO
#define LOG_INFO(message) log_main(message)




#endif