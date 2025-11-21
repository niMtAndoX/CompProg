#include<stdio.h>



int main(){
	printf("Enter year:\n");
	int year = 0;
	scanf("%d", &year);
	
	if(year % 4 == 0 && year % 100 != 0){
		printf("%d is a leapyear", year);

	}else{
		if(year %400 == 0){
			printf("%d is a leapyear", year);
	
		}else{
			printf("%d is not a leapyear", year);
		}
	}
	
	return 0;
}
