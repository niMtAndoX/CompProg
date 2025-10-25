#include<stdio.h>

int main(){

    int a[3][3] = {0};
    int b[3][3] = {0};


    for(int i = 0; i < 3; i++){
        for(int k = 0; k< 3; k++){
            printf("Please provide a value for index %d , %d of matrix A: ", i,k);
            scanf("%d", &a[i][k]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int k = 0; k< 3; k++){
            printf("Please provide a value for index %d , %d of matrix  B: ", i,k);
            scanf("%d", &b[i][k]);
        }
    }

    printf("MATRIX A\n");
    for(int i = 0; i < 3; i++){
        for(int k = 0; k< 3; k++){
            printf("%d ", a[i][k] );
        }
        printf("\n");
    }
    printf("MATRIX B\n");
    for(int i = 0; i < 3; i++){
        for(int k = 0; k< 3; k++){
            printf("%d ", b[i][k] );
        }
        printf("\n");
    }
        

    int c[3][3] = {0};
    int d[3][3] = {0};
    for(int i = 0; i < 3; i++){
            for(int k = 0; k< 3; k++){
                c[i][k] = a[i][k] + b[i][k];
                d[i][k] = a[i][k] - b[i][k];
            }
    }

    printf("MATRIX C\n");
    for(int i = 0; i < 3; i++){
        for(int k = 0; k< 3; k++){
            printf("%d ", c[i][k] );
        }
        printf("\n");
    }
    printf("MATRIX D\n");
    for(int i = 0; i < 3; i++){
        for(int k = 0; k< 3; k++){
            printf("%d ", d[i][k] );
        }
        printf("\n");
    }

    
    return 0;
}