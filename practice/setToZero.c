#include<stdio.h>

void setToZero(int *p);

int main(){
	int data_value = 500;
	printf("Original Value: %d \n", data_value);
	
	int *data_ptr = &data_value; 
	
	setToZero(data_ptr);
	
	printf("Final Value: %d \n", data_value);
	
	return 0;
}

void setToZero(int *p){
	*p = 0;
}
