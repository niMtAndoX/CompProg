#include<stdio.h>

int main(){
	
	const int MAX_CAPACITY = 256;
	printf("MAX_CAPACITY before: %d \n", MAX_CAPACITY);
	
	int *cap_ptr = &MAX_CAPACITY;
	
	*cap_ptr = 512;
	
	printf("MAX_CAPACITY after: %d", MAX_CAPACITY);
	
	return 0;
}
