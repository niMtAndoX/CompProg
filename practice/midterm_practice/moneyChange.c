#include<stdio.h>

void changeMoney();

int main(){
	
	int input;
	printf("Please enter the amount you need:\n");
	scanf("%d", &input);
	changeMoney(input);
	
	
	
}

void changeMoney(int input){
	int thousand = input / 1000;
	int hundred = (input %1000) /100;
	int fifty = (input %100) / 50;
	int ten = (input % 50) / 10;
	int five = (input %10) / 5;
	int one = (input % 5);
	
	printf("You need the following notes and coins: \n");
	printf("%d thousand dollar bills \n", thousand);
	printf("%d hundred dollar bills \n", hundred);
	printf("%d fifty dollar bils \n", fifty);
	printf("%d ten dollar bills \n", ten);
	printf("%d five dollar coins \n", five);
	printf("%d one dollar coins \n", one);	
	 
}
