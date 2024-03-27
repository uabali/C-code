//
// Created by Umut Abalı on 26.03.2024.
//
#include <stdio.h>
#include <unistd.h>

int main(){

    printf("I'm exec.c \n");
    printf("My PID: %d \n", getpid());

    char *args[] = {"./hello",NULL};
    execv(args[0],args);

    printf("Coming back to exec.c");

    return 0;
}
