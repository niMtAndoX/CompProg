#include<stdio.h>

#define M 3
#define K 3
#define N 3

int main(){

    int a[M][K] = {0};
    int b[K][N] = {0};
    int c[M][N] = {0};

    for(int i = 0; i < M; i++){
        for(int k = 0; k< N; k++){
            printf("Please provide a value for index %d , %d of matrix A: ", i,k);
            scanf("%d", &a[i][k]);
        }
    }
    for(int i = 0; i < K; i++){
        for(int k = 0; k< N; k++){
            printf("Please provide a value for index %d , %d of matrix  B: ", i,k);
            scanf("%d", &b[i][k]);
        }
    }

     printf("MATRIX A\n");
    for(int i = 0; i < M; i++){
        for(int k = 0; k< K; k++){
            printf("%d ", a[i][k] );
        }
        printf("\n");
    }
    printf("MATRIX B\n");
    for(int i = 0; i < K; i++){
        for(int k = 0; k< N; k++){
            printf("%d ", b[i][k] );
        }
        printf("\n");
    }

    for(int i = 0; i<M; i++){
        for(int k = 0; k <N; k++){
            int sum = 0;
            for(int j = 0; j <K; j++){
                sum += a[i][k] * b[k][j];
            }
            c[i][k] = sum;
        }
    }

    printf("MATRIX C");
    printf("MATRIX C\n");
    for(int i = 0; i < N; i++){
        for(int k = 0; k< M; k++){
            printf("%d ", c[i][k] );
        }
        printf("\n");
    }


    return 0;
}