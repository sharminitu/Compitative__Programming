#include<stdio.h>
int main()
{
    int num;
    printf(" Enter a number :");
    scanf("%d",&num);
    if(num%2==0)

           printf("Even\n ",num);

     else if(num%2!=0)
        printf("Odd\n ",num);

    return 0;
}