#include<stdio.h>

int main(){

    int arr[5];

    int arr2[] = {1,2,3,4,5};

    int arr3[5]= {0};

    printf("value: %d \n",arr3[2]);
    for(int i=0; i < 5; i++){
        printf("%d", arr3[i]);
    }

    int size = sizeof(arr2); // each integer is 4 byte
    int length = sizeof(arr2) / sizeof(arr2[0]);

    for(int i=0; i <  length; i++){
        printf("%d", arr2[i]);
    }

    return 0;

}