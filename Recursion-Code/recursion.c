#include <stdio.h>

int factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }
        return n * factorial(n - 1);
}

int main(){

    int n=0;
    int fact=1;

    printf("Enter number: ");
    scanf("%d",&n);

   // while( n >= 1){
   //     fact = fact * n;
   //     n--;
   // }

    //printf("Result:%d\n",fact);

    printf("Result:%d",factorial(n));

    return 0;
}