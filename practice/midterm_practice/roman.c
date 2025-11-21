#include<stdio.h>

int roman_to_int(char roman[]);

#define SIZE 5 //constant

int main(){
	
	
	char arr[] = {"MMXXIV"};
	int number = roman_to_int(arr);
	printf("%d", number);
	
	
	return 0;
}

int roman_to_int(char roman[]){
	int number = 0;
	int length = 0;
	for(int i = 0; roman[i] != '\0'; i++){
		length++;	
	}
	
	int values[length];
	for(int i = 0; roman[i] != '\0'; i++){
		switch(roman[i]){
			case 'M': values[i] = 1000;
			break;
			case 'D': values[i] = 500;
			break;
			case 'C': values[i] = 100;
			break;
			case 'L': values[i] = 50;
			break;
			case 'X': values[i] = 10;
			break;
			case 'V': values[i] = 5;
			break;
			case 'I': values[i] = 1;
		}
		printf("%d ,", values[i]);
	}
	
	printf("\n");
	
	for(int i = 0; i < length; i++){
		if(values[i] < values [i+1]){
			int temp = number;
			number += values[i+1] - values[i];
			printf("%d += %d - %d\n",temp, values[i+1], values[i]);
			i++;
		}else{
			int temp = number;
			number += values[i];
			printf("%d += %d\n", temp, values[i]);
		}
	}
	
	return number;
	
}
