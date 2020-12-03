#include <stdio.h>
#include <time.h>

int main(){
    struct tm *local;
    time_t t;
    t=time(NULL);
    local=localtime(&t);
    printf("time - %d: %d: %d\n", local->tm_hour, local->tm_min, local->tm_sec);
    return 0;
}
