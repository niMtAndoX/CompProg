#include<stdio.h>

int maximum(int x, int y, int z);

int main(void){
	int num1;
	int num2;
	int num3;
	
	printf("%s", "Enter three integers: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	
	printf("Maximum is: %d \n", maximum(num1, num2, num3));
}

int maximum(int x, int y, int z){
	int max = x;
	if(x<y){
		max = y;
	}
	if(max < z){
		max = z;
	}
	
	return max;
	
}
