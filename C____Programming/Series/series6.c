//1 x 2 x 3 x 4 x 5......xn=
#include<stdio.h>
int main()
{
    int n,i,result=1;
    printf("Enter n = ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        result = result *i;
    }
    printf("%d\n",result);
    return 0;
}