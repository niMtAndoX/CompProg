#include<stdio.h>

int main(){
	int jan = 31;
	int feb = 28;
	int mar = 31;
	int apr = 30;
	int may = 31;
	int jun = 30;
	int jul = 31;
	int aug = 31;
	int sep = 30;
	int oct = 31;
	int nov = 30;
	int dec = 31;
	
	printf("Enter the month:\n");
	int month;
	scanf("%d", &month);
	int days;
	printf("Enter day\n");
	scanf("%d", &days);
	
	int totalDays = 0;
	
	switch(month){
		case 1: totalDays = days;
		break;
		case 2: totalDays = jan + days;
		break;
		case 3: totalDays = jan + feb + days;
		break;
		case 4: totalDays = jan + feb + mar + days;
		break;
		case 5: totalDays = jan + feb + mar +  apr + days;
		break;
		case 6: totalDays = jan + feb + mar +  apr + may + days;
		break;
		case 7: totalDays = jan + feb + mar +  apr + may + jun + days;
		break;
		case 8: totalDays = jan + feb + mar +  apr + may + jun + jul + days;
		break;
		case 9: totalDays = jan + feb + mar +  apr + may + jun + jul + aug + days;
		break;
		case 10: totalDays = jan + feb + mar +  apr + may + jun + jul + aug + sep + days;
		break;
		case 11: totalDays = jan + feb + mar +  apr + may + jun + jul + aug + sep + oct+ days;
		break;
		case 12: totalDays = jan + feb + mar +  apr + may + jun + jul + aug + sep + oct + nov + days;
		break;
	}
	
	int weekday = totalDays % 7 -1;
	printf("weekday: %d\n", weekday);
	switch(weekday){
		case 0: printf("Wednesday");
		break;
		case 1: printf("Thursday");
		break;
		case 2: printf("Friday");
		break;
		case 3: printf("Saturday");
		break;
		case 4: printf("Sunday");
		break;
		case 5: printf("Monday");
		break;
		case 6: printf("Tuesday");
		break;
		
	}
	
	
}
