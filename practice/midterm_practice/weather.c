#include<stdio.h>

int main(){
	int arr[] ={0,0,0,0,0,0,0};
	
	for(int i = 0; i <= 6; i++){
		printf("Enter the highest temperature of day %d\n", i+1);
		scanf("%d", &arr[i]);
	
	}
	
	for(int i = 0; i < 7; i++){
		printf("%d, ", arr[i]);
	}
	
	int max = arr[0];
	int sec = arr[0];
	int min = arr[0];
	int avg = 0;
	for(int k = 0; k<7; k++){
		if(arr[k] > max){
			if(k == 6){
				sec = max;
			}
			max = arr[k];
		}
		if(arr[k] < min){
			min = arr[k];
		}
		
		
		avg += arr[k];
		
	}
	
	avg = avg / 7;
	printf("\nMAXIMUM: %d \nSECOND MAX: %d \nMINIMUM: %d \nAVG: %d", max, sec, min, avg);
	
	
}
