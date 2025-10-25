#include<stdio.h>

int main(){

    for(int i = 1; i <=10;i++){
        for(int k = 1; k <= i; k++){
            printf("%s", "*");
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 10; i >=1;i--){
        for(int k = 1; k <= i; k++){
            printf("%s", "*");
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 10; i >=1;i--){
        
        for(int j = i; j<10; j++){
            printf(" ");
        }
        for(int k = 1; k <= i; k++){
            printf("%s", "*");
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 1; i <= 10;i++){
        for(int j = 11-i; j>1; j--){
            printf(" ");
        }
        for(int k = 1; k <= i; k++){
            printf("%s", "*");
        }
        printf("\n");
    }



    return 0;
}