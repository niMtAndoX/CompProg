#include<stdio.h>

int main(){
	int a = 7;
	int *aptr = &a;
	
	printf("The address of a is %p, the value at Address a is %d \n",aptr,*aptr);
	
	return 0;
}
