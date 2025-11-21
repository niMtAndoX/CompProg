#include<stdio.h>

int main(){
	
	int whiteC = 4;
	int starC = 0;
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < whiteC; j++){
			printf(" ");
		}
		for(int k = 0; k<=starC; k++){
			printf("*");
		}
		printf("\n");
		starC += 2;
		whiteC--;
	}
	
	whiteC = 0;
	starC =7;
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j <= whiteC; j++){
			printf(" ");
		}
		for(int k = 0; k<starC; k++){
			printf("*");
		}
		printf("\n");
		starC -= 2;
		whiteC++;
	}
}
