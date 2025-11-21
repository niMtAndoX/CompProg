#include<stdio.h>

int main(){
	

	int A[3][3];
	int B[3][3];
	int C[3][3];
	
	//Matrix A fuellen
	for(int i = 0; i<3; i++){
		for(int k = 0; k<3; k++){
			printf("Please enter the value of postition [%d][%d] of Matrix A:\n", i+1,k+1);
			scanf("%d", &A[i][k]);
		}
	}
	
	printf("\n");
	
	for(int i = 0; i<3; i++){
		for(int k = 0; k<3; k++){
			printf("Please enter the value of postition [%d][%d] of Matrix B:\n", i+1, k+1);
			scanf("%d", &B[i][k]);
		}
	}
	printf("Matrix A\n");
	for(int i = 0; i<3; i++){
		for(int k = 0; k<3; k++){
			printf("%d ", A[i][k]);
		}	
		printf("\n");		
	}
	printf("\nMatrix B\n");
	for(int i = 0; i<3; i++){
		for(int k = 0; k<3; k++){
			printf("%d ", B[i][k]);
		}	
		printf("\n");		
	}

}
