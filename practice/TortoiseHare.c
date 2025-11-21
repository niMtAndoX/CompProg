#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include <windows.h>

void move_tortoise(int *tortoise_ptr);
void move_hare(int *hare_ptr);


int main(){
	int tortoise = 0;
	int hare = 0;
	
	int *tortoise_ptr = &tortoise;
	int *hare_ptr = &hare;
	
	int round = 0;
	srand((unsigned)time(NULL));
	
	while(tortoise < 70 && hare < 70){
		printf("\n---ROUND %d---\n", round);
		
		move_tortoise(tortoise_ptr);
		move_hare(hare_ptr);
		
		
		printf("Tortoise is at: %d\n", tortoise);
		printf("Hare is at: %d\n", hare);
		
		
    if (tortoise >= 70 && hare >= 70) {
        printf("BOTH WON\n");
    } else if (tortoise >= 70) {
        printf("TORTOISE WON\n");
    } else if (hare >= 70) {
        printf("HARE WON\n");
    }

		//sleep(1);
		round++;
	}
	
}

void move_tortoise(int *tortoise_ptr){
	int prob = rand()%100;
	if(prob >= 50){
		*tortoise_ptr += 3; //Fast Plod 50% 3 forward
		printf("Tortoise makes Fast plod\n");
	}else if(prob >= 20 && prob <50){
		*tortoise_ptr += 1; //Slow Plod 30% 1 forward
		printf("Tortoise makes slow plod\n");
	}else{
		*tortoise_ptr -= 6; //Slip 20% 6 backward
		printf("Tortoise makes slip\n");
	}
	
	if(*tortoise_ptr < 0){
		*tortoise_ptr = 0;
	}
}

void move_hare(int *hare_ptr){
	int prob = rand()%100;
	if(prob < 20){
		//Sleep 20% nothing
		printf("Hare sleeps\n");
	}else if(prob >= 20 && prob < 40){
		*hare_ptr += 9; //Big Hop 20% 9 forward
		printf("Hare makes Big Hop\n");
	}else if(prob >= 40 && prob <50){
		*hare_ptr -= 12; //Big Slip 10% 12 backward
		printf("Hare makes Big Slip\n");
	}else if(prob >= 50 && prob < 80){
		*hare_ptr += 1; //Small Hop 30% 1 forward
		printf("Hare makes small hop\n");
	}else{
		*hare_ptr -=2; //Small slip 20% 2 backward
		printf("Hare makes small slip\n");
	}
	if(*hare_ptr < 0){
		*hare_ptr = 0;
	}

}
