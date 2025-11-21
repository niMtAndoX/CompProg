#include<stdio.h>

int main(){
	for(int i = 0; i < 10; i++){
		for(int k = 0; k <=i; k++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(int i = 10; i>0; i--){
		for(int k = 0; k<i; k++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(int i = 0; i<10; i++){
				
		for(int k = 1; k<=i; k++){
			printf(" ");
		}
		for(int k = 10; k>i; k--){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	for(int i = 0; i < 10; i++){
		for(int k = 9; k>i; k--){
			printf(" ");
		}
		for(int k = 0; k <= i; k++){
			printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
}
