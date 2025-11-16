//Write a programme that read 3 numbers and disply maximum
#include<stdio.h>
int main()
{
    int num1,num2,num3;

    printf("Enter three numbers :");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3)
       printf("Large number = %d\n",num1);

    else if(num2>num1 && num2>num3)
       printf("Large number= %d\n",num2);

    else if(num3>num1 && num3>num2)
       printf("Large number = %d\n",num3);

    else 
       printf("Number are eqal");


    return 0;
}