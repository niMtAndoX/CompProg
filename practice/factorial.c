#include<stdio.h>

int Facto(int n);

int main(){

	printf("%d\n", Facto(5));
	return 0;
}

int Facto(int n){
	if(n == 1){
		return 1;
	}else{
		return n*Facto(n-1);
	}
}
