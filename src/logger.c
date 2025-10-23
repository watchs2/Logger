#include <stdio.h>
#include "../include/logger.h"


void log_init(LogConfig* config){
   
}

void log_close(){

}

void log_main(const char* message){
    printf("[INFO] - %s",message);
}