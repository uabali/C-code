//
// Created by Umut Abalı on 4.04.2024.
//
#include <stdio.h>
#include <stdlib.h>

int main(){

    int *Mymemory = malloc(sizeof(int)*256);
    int *Mymemory2 = Mymemory+256;

    printf("%d\n",Mymemory);
    printf("%d", (Mymemory2)-(Mymemory));


    free(Mymemory);

    return 0;
}