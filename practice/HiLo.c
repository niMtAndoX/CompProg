#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>



int main(){
	
	bool correct = false;
	
	int LOW = 1;
	int HIGH = 100;
	
	srand(time(NULL));
	int code = rand()%100+1;
	
	int input;
	
	while(!correct){
		printf("Guess the Number. The number is between %d and %d \n", LOW, HIGH);
		scanf("%d", &input);
		
		if(input == code){
			correct = true;
			printf("Congratulations! %d is the secret code", code );
			break;
		}else if(input <= code && input >= LOW){
			LOW = input;
		}else if(input >= code && input <= HIGH){
			HIGH = input;
		}
	}
	return 0;
}


