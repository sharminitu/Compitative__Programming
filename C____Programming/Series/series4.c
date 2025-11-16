//1^2+2^2+3^2+.......+n^2
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Entr n =");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;//n^3=i*i*i sum =1
    }
    printf("sum = %d",sum);

    return 0;
}