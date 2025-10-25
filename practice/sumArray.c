#include<stdio.h>

int sumArr(int arr[], int size);

int main(){
	int arr[] = {1,2,3,4,5};
	int size = 5;
	
	printf("Sum = %d", sumArr(arr, size));
	
	return 0;
	
}

sumArr(int arr[], int size){
	int sum = 0;
	for(int i = 0; i<size; i++){
		sum += arr[i];
	}
	return sum;
}
