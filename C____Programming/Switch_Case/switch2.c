#include<stdio.h>
int main()
{
    int choice;
    float temp,convertedTemp;

    printf("Temperature conversion menu\n");
    printf("1. Fahrenheit to celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice :");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1 :
             
             {
                printf("Enter  the Fahrenhit temperature :");
                scanf("%f",&temp);
                convertedTemp =(temp-32)/1.8;
                printf("The temperature is celsius : %f\n",convertedTemp);
                break;
             }
        case 2 :
             {
                 printf("Enter  the celsius temperature :");
                 scanf("%f", &temp);
                 convertedTemp = (1.8*temp)+32;
                 printf("The temperature is Fahrenhit : %f\n", convertedTemp);
             }

    }
    return 0;
}