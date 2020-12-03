#include <stdio.h>
#include <time.h>

int numerMiesiaca(){
    time_t t;
    time(&t);
    struct tm *myTime = localtime(&t);

    return(myTime->tm_mon+1);

}

int main(){
    printf("%i",numerMiesiaca());

    return 0;
}
