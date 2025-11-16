#include<stdio.h>
int main()
{
    double C,F;
    printf("Enter the temperature in celsius :");
    scanf("%lf",&C);

    F= (1.8*C)+32; //F=(1.8*c)+32

    printf("Farhenhite = %lf",F);

    return 0;
}