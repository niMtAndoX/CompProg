#include<stdio.h>

int main(){
	int arr[] = {1,2,6,4,8,5,9,7,8,10,6,3,8,7,6,5,6,7,8,6};
	
	for(int i = 1; i<=10; i++){
		int counter = 0;
		for(int k = 0; k<20;k++){
			if(arr[k] == i){
				counter++;
			}
		}
		printf("The number %d exists %d times\n", i, counter);
	}
	
	return 0;
}
