#include<stdio.h>

int find_second_largest(const int *arr[], int size);
int checkSame(const int *arr[], int size);

int main(){
	int size = 3;
	const int *test[] = {10,10,10};
	
	int result = find_second_largest(test, size);
	printf("\n%d ", result);
	

	return 0;
}

int find_second_largest(const int *arr[], int size){
	printf("\n");
	int max = arr[0];
	int secondMax = 0;
	if(size == 1 || checkSame(arr, size) == 0 ){
		printf("not found");
		return -9999;
	}else{
		for(int i = 0; i < size; i++){
			
		//printf("if(%d > %d) \n", arr[i+1], arr[i]);
		
		if(arr[i] > max){
			
			max = arr[i];
			
		}
		//printf("if(%d != %d) && %d > %d \n", arr[i], max, arr[i], secondMax );
		if(arr[i] != max && arr[i] > secondMax){
				
			secondMax = arr[i];
				
				
		}
		//printf("max = %d \n", max);
		//printf("secondMax = %d\n", secondMax);
	}
	
	printf("Array (arr)			Size		Second largest unique element\n{");
	for(int k = 0; k < size; k++){
		printf("%d, ", arr[k]);
	}
	printf("}		%d		%d", size, secondMax);
	
	return secondMax;
	}
	
	
}

int checkSame(const int *arr[], int size){
	for(int i = 0; i < size-1; i++){
		if(arr[i] != arr[i+1]){
			printf("NOT SAME\n");
			return 1;
		}
	}
	printf("All values are the same\n");
	return 0;
}


