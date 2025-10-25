#include<stdio.h>

int main(){

    int cont = 1;
    float weight;
    float height;
    float bmi;

    while(cont != 0){
        printf("Enter height and weight\n");
        scanf("%f  %f", &height, &weight);

        if(weight == 0 || height == 0){
            break;
        }

        bmi = weight / ((height/100) * (height/100));

        printf("Weight = %f, height = %f, BMI = %f \n", weight, height, bmi);
        printf("Do you want to continue? If not press 0.  \n");
        scanf("%d", &cont);

    }



    return 0;
}