#include<stdio.h>
#include<math.h>

const float e = 0.00000001;

float limit(float x);
float derivative(float x);
float function(float x);

int main(){
	
	float limit_result = limit(0);
	float derivative_result = derivative(0);
	
	printf("The limit of the funtion f(x) = sin(x) / x at x =0 is: %f \n", limit_result); //returns 1
	printf("The derivative of the funtion f(x) = sin(x) / x at  x= 0 is: %f \n", derivative_result); //returns 0
	
	return 0;
		
}

float function(float x){
	return sin(x)/x;
}

float limit(float x){
	return function(x+e);
}

float derivative(float x){
	return (function(x+e) - function(x-e))/ (2*e);
}
