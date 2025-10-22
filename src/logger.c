#include <stdio.h>
#include "../include/logger.h"


void log_info(const char* message){
    printf(GREEN "[INFO] %s" RESET "\n", message);
}


void log_error(const char* message){
    printf(RED "[ERROR] %s" RESET "\n", message);
}

