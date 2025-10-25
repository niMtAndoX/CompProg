#include<stdio.h>

int main(){

    int scores[] = {1,2,6,4,8,5,9,7,8,10,6,3,8,7,6,5,6,7,8,6};

    int length = sizeof(scores) / sizeof(scores[0]);

    printf("Rating        ");
    for(int i = 1; i <=10; i++){
        printf("%d      ", i);
    }

    printf("\nFrequency     ");
    for(int i = 1; i <= 10; i++){
        int countOfi = 0;
        for(int k = 0; k < length; k++){
            if(scores[k] == i){
                countOfi++;
            }
        }
        printf("%d      ", countOfi);
    }

    return 0;
}