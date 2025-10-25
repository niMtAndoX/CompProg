#include<stdio.h>

int main(){

    int a = 100;
    int b;

    while(a>3){

        b=(--a);
        printf("The value of a = %d, b = %d \n", a, b);

    }

    printf("The final value of a = %d, b = %d \n", a, b); 

    return 0;
}