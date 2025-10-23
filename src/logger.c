#include <stdio.h>
#include "../include/logger.h"


void log_init(LogConfig* config){
   
}

void log_close(){

}

void log_main(int type ,const char* message){
    if(type == INFO_LOG){
        printf(GREEN"[INFO]"RESET"- %s\n",message);
    }
    if(type == WARN_LOG){
        printf(YELLOW"[WARN]"RESET" - %s\n",message);
    }
    if(type == ERROR_LOG){
        printf(RED"[ERROR]"RESET" - %s\n",message);
    }
    if(type == DEBUG_LOG){
        printf(BLUE"[DEBUG]"RESET" - %s\n",message);
    }

}