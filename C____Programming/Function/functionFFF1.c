#include<stdio.h>
int squre(int a)
{
    return a*a;
}

int main()
{
    int num;
    printf("Enter Any integer number:");
    scanf("%d",&num);
    int result= squre(num);

    printf("Squre is :%d\n",result);
    
}