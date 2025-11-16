#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter Any positive number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {

        fact =fact * i; //fact=2
    }

    printf("%d\n",fact);
    return 0;
}