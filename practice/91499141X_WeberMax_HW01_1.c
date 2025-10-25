#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int checkCheat(char input[]);


int main(){
	int A = 0;
	int B = 0;
	
	srand(time(NULL));
	int codeArr[4];
	int guessArr[4];
	
	for(int i = 0; i<4; i++){
		int code_i = rand()%10;
		codeArr[i] = code_i;
	}
	
	char input[5];
	int cheatCount = 0;
	
	while(A != 4){
		A = 0;
		B = 0;
		int codeUsed[4]  = {0,0,0,0};
		int guessUsed[4] = {0,0,0,0};
		
		printf("We are playing Bulls and Cows. Try to guess the code. Please enter your guess: \n");
		scanf("%s", &input);
		
		if(checkCheat(input) == 0){
			if(cheatCount == 4){
				printf("All digits already revealed! \n");
				continue;
			}
			printf("Here is the next digit of the code: %d\n", codeArr[cheatCount]);
			cheatCount++;
			continue;
		}
		
   		//Convert ASCII to decimal
    	for (int i = 0; i < 4; i++){
        	guessArr[i] = input[i] - '0';
    	}
    	
    	for (int i = 0; i < 4; i++) {
		    if (guessArr[i] == codeArr[i]) {
		        A++;
		        codeUsed[i] = 1;
		        guessUsed[i] = 1;
		        printf("%d is correct and in the correct position! \n", guessArr[i]);
		    }
		}
    	
		for (int i = 0; i < 4; i++) {
		    if (guessUsed[i]){
			 continue;               // already a bull
			}
			
		    for (int j = 0; j < 4; j++) {
		        if (codeUsed[j]){
		        	continue; // already machted
				}           	
		        if (guessArr[i] == codeArr[j]) {
		            B++;
		            codeUsed[j] = 1;      
					printf("%d is correct and in the wrong position! \n", guessArr[i]);            
		            break;                          	
		        }
		    }
		}	
	}
	printf("CONGRATULATIONS! You won the game.");
	
	return 0;
}

int checkCheat(char input[]){
	char cheat[] = {'c','h','e','a','t'};
	for(int i=0; i<5; i++){
		if(input[i] != cheat[i]){
			return 1;
		}
	}
	return 0;
}
