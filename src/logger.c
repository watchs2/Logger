#include "../include/logger.h"


void log_init(LogConfig* config){

}

void log_close(){

}


void log_main(int type ,const char* message, ...){
    va_list args;
    va_start(args, message);  
    if(type == INFO_LOG){
        printf(GREEN"[INFO]"RESET"-");
    }
    if(type == WARN_LOG){
        printf(YELLOW"[WARN]"RESET"-");
    }
    if(type == ERROR_LOG){
        printf(RED"[ERROR]"RESET"-");
    }
    if(type == DEBUG_LOG){
         printf(BLUE"[DEBUG]"RESET"-");
    }
    vprintf(message, args);
    printf("\n");
    va_end(args);
}

