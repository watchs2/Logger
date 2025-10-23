#include "../include/logger.h"
#include <stdio.h>

/* 
void my_function(int a) {
    LOG_DEBUG("A calcular para o valor: %d", a);
    if (a < 0) {
        LOG_ERROR("Valor negativo (a=%d). Erro irrecuperável!", a);
        return;
    }
    
    LOG_INFO("Cálculo concluído com sucesso.");
}
*/

int main(void) {

    LogConfig config ={
        .enable_debug = 1,
        .enable_timestamp = 1,
        .enable_file_logging = 1,
        .filepath = "app.log"
    };
    log_init(&config);

    LOG_INFO("Hello");

    log_close();


    return 0;

}
/*
    LogConfig config = {
        .min_level = LOG_LEVEL_DEBUG,
        .enable_timestamp = 1,
        .enable_file_logging = 1,
        .filepath = "app.log"
    };

    // 2. Inicialização do Singleton
    log_init(&config);
    
    // 3. Uso Simples e Limpo em qualquer lugar do código
    LOG_INFO("A aplicação começou a correr.");
    
    my_function(10);
    my_function(-5);
    
    LOG_WARN("O programa está a fechar.");
    
    // 4. Fecho
    log_close();

    return 0;
}

*/