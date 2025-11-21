#include<stdio.h>

int main(){

	int arr[]={19,3,15,7,11};
	
	printf("Element 	Value		Histogramm\n");
	for(int i = 0; i<5; i++){
		printf("  %d		%d		", i, arr[i]);
		for(int k = 0; k < arr[i];k++){
			printf("*");
		}
		printf("\n");
	}

}
