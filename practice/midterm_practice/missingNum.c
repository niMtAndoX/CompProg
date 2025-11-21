#include<stdio.h>

int find_missing_number(int arr[], int M);
int findMax(int arr[], int M);

int main(){
	int arr[]= {5, 6, 12, 9, 7, 8, 11};
	
	int missingNum = find_missing_number(arr, 7);
	printf("The missing number is %d", missingNum);
	return 0;
}

int find_missing_number(int arr[], int M){
	int maxNum = findMax(arr, M);
	for(int i = 0; i < M; i++){
		int boolean = 0;
		for(int k = 0; k < M;k++){
			if(arr[k] == arr[i]+1 ){
				boolean = 1;
			}
		}
		if(boolean == 0 && (arr[i] != maxNum)){
			return arr[i]+1;
		}
	}
	
}

int findMax(int arr[], int M){
	int max = arr[0];
	for(int i = 0; i < M; i++ ){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	printf("Max Number: %d\n", max);
	return max;
}
