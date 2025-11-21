#include<stdio.h>
#include <math.h> //for math
#include <stdlib.h> //for random function

#define SIZE 5 //constant

void myFunction();

int main(){
	
	int a = 10;
	int b = 5;
	
	//Special Characters
		// \n new line
		// \t tab
		// \a altert (produces a sound or visivle alert without changing the current cursor position)
		// \\ insert a backslash as a string
		// \" insert a double quote as a string
		
		// %c prints a single character
		// %d prints a signed decimal integer
		// %u prints an unsigned decimal integer
		// %o prints an integer in octal format
		// %x or %X prints an integer in hexadecimal format (%x for lower case a-f, %X for upper case)
	
	//Assignment operators
		// +=
		// -=
		// *=
		// /=
		// %=
		
	// Incremental Operators
	a++; // use the current value of a then increment it by 1
	++a; // increment by one than use the new value of a in the expression
	a--;
	--a;
	
	
	//Arithmetic Operators
	int sum = a + b;
	int sub = a - b;
	int mul = a * b;
	int div = a / b;
	int mod = a % b;
	
	//Scanner 
	int input;
	scanf("%d", &input); 
	
	//Conditional operators 
		// == equal to
		// != not equal to
		// < / > less than / greater than
		// <= / >= less / greater or equal than
		
		// && Logical AND
		// || Logical OR
		// ! Logical NOT
		
	// if-statements
	if(a < b){
		printf("%d ist kleiner als %d \n", a,b);
	}else if(a == b){
		printf("a und b sind gleich gross");
	}else{
		printf("%d ist groesser als %d",a,b );
	}
	
	// wenn a kleiner b -> c = 3 , sonst c = 8
	int c = (a < b) ? 3 : 8;
	
	int day = 1;
	switch(day) {
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		//...		
	}
	
	// while-loop
	int product = 3;
	while(product < 100){
		product = 3 * product;
	}
	
	// do-while loop
	do{
		product = product * 3;
	}while(product < 100);
	
	// for loop
	for(int i = 0; i < 10; i++){
		// do something 10 times
		break; //exit loop
		continue; //skip rest of the code in the loop. go next iteration
	}
	
	//Iterating over two dimensional array
	int n = 5
	int arr[n][n];
	for(int i = 0; i < n; i++){
		for(int k = 0; k < n; k++){
			printf("%d, ", arr[i][k]);
		}
	}
	
	//String
	char helloWorld[] = "Hello World";
	
	//reading in string
	char string[19];
	printf("Enter 19 character long string");
	scanf("%19s", string);
	
	scanf_s("%s", string1,SIZE);
	
	//math functions
	int x = 10;
	float sqrt = sqrt(x); // Wurzel(x)
	float exp = exp(x); //e^x
	float log = log(x); //nat log of x
	float pow = pow(x,2); //x^2
	float sin = sin(x);
	float cos = cos(x);
	float tan = tan(x);
	
	//Function call
	myFunction();
	
	//Random Number generation
	srand(time(NULL));
	int random = rand() % 10; //Random number from 1 to 10 
	
	//pointer
	int myAge = 43;     // An int variable
	int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge
	
	int myNumbers[4] = {25, 50, 75, 100};
	int i;

	for (i = 0; i < 4; i++) {
  	printf("%p\n", &myNumbers[i]); //Print the adresses of the values in the array
	}	
	
	int x = 10;      // normal int variable
    int *p = &x;     // pointer variable p points to x
	
	*p = 42;         // use the pointer to change x's value
	
	int myInt;
  	printf("%zu", sizeof(myInt));
	
	return 0;
}

void myFunction(){
	// code to be executed
}


