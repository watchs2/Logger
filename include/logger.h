
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

//MACROS DE CORES

#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

void log_info(const char* message);
void log_error(const char* message);

#endif