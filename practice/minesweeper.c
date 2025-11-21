#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int n = 8;
	int arr[n][n];

	int mineCounter = 0;
	
	srand(time(NULL));
	
	for(int i = 0; i<n; i++){
		for(int k = 0; k<n;k++){
			int random = rand()%100;
			if(random < 20 && mineCounter < 10){
				arr[i][k] = -1;
				mineCounter++;
			}else{
				arr[i][k] = 0;
			}
			printf("%d ",arr[i][k]);
		}
		printf("\n");
	}
	
	for(int i = 0; i < n; i++){
		for(int k = 0; k < n; k++){
			if(arr[i][k] == 0){
				int mineCounter = 0;
				for(int j = i-1; j <= i+1; j++){
					for(int m = k-1; m <= k+1; m++){
						if((!(j < 0 || j >= n) && !(m < 0 || m >= n) ) && (arr[j][m] == -1)){
							if(!(j == i && m == k)){
								mineCounter++;
							}	
						}
					}
				}
				
				arr[i][k] = mineCounter;
			}
		}
	}
	printf("\n");
	for(int i = 0; i < n; i++){
		for(int k = 0; k < n; k++){
			printf("%d ", arr[i][k]);		
		}
		printf("\n");
	}
	
	return 0;
}
