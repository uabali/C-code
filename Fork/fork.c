#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(){

    fork();
    fork();
    fork();
    printf("I'm a fork :)) \n");

    return 0;
}
