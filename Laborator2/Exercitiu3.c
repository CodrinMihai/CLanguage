#include <stdio.h>
#include <unistd.h> 

int main(){
    sleep(1);
    printf("3\n");
    sleep(1); // format is sleep(x); where x is # of seconds.
    printf("2\n");
    sleep(1);
    printf("1\n");
    return 0;
}