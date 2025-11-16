// sum = 1+2+3+...+998+999+1000
#include <stdio.h>
int main()
{
    int i,n, sum;
    printf("n=");
    scanf("%d", &n);

    for(i=1,sum=0;i<=n;i++)
     {
        sum=sum+i;
     }


    printf("summation is %d\n", sum);

    return 0;
}