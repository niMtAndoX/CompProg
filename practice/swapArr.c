#include<stdio.h>

int swap_array_contents(int arr1[], int arr2[], int size);

int main(){
	
	int arr1[] = {1,2,3,4,5};
	int arr2[] = {6,7,8,9,10};
	int size = 5;
	
	printf("Before swapping \n array 1 \n");
	
	for(int i = 0; i<size; i++){
		printf("%d, ", arr1[i]);
	}
	printf("\narray2 \n");
	
	for(int i = 0; i<size; i++){
		printf("%d, ", arr2[i]);
	}
	
	swap_array_contents(arr1, arr2, size);
	
	printf("\nAfter swapping \n array 1 \n");
	for(int i = 0; i<size; i++){
		printf("%d, ", arr1[i]);
	}
	printf("\narray2 \n");
	
	for(int i = 0; i<size; i++){
		printf("%d, ", arr2[i]);
	}
	return 0;
}

swap_array_contents(int arr1[], int arr2[], int size){
	int arrTemp[size];
	for(int i = 0; i < size; i++){
		arrTemp[i] = arr2[i];
		arr2[i] = arr1[i];
		arr1[i] = arrTemp[i];
	}
}
