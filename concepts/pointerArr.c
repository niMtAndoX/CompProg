#include<stdio.h>

int main(){
	int A[4] = {25,50,75,100};
	
	//Change the value of the first element to 13
	*A = 13;
	
	//Change the value of th second element to 17
	*(A+1) = 17;
	
	//Get the value of the first element
	printf("%d\n", *A);
	
	//Get the value of the second element
	printf("%d\n", *(A+1));
} 
