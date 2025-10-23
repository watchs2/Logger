#include "../include/logger.h"
#include <stdio.h>


void my_function(int a) {
    LOG_DEBUG("A calcular para o valor: ");
    if (a < 0) {
        LOG_ERROR("Valor negativo  Erro irrecuperável!");
        return;
    }
    
    LOG_INFO("Calculo concluido com sucesso.");
}


int main(void) {

    LogConfig config ={
        .enable_debug = 1,
        .enable_timestamp = 1,
        .enable_file_logging = 1,
        .filepath = "app.log"
    };
    log_init(&config);
    my_function(2);

    log_close();


    return 0;

}
