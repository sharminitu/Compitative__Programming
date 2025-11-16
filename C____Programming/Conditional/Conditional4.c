#include<stdio.h>
int main()


{

    int num ;
    printf("Enter a number :");
    scanf("%d",&num);
    if(num>0)
        printf(" %d Number is positive\n ",num);

    else if(num<0)
        printf("Number is negative ");
    
    else
    printf("Number is Zero");


    return 0;
}