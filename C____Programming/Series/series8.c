//1-2+3-4+5-6....
//(1+3+5+....+n) -(2+4+6.....+n)
#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0;
    printf("Enter n = ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            even =even +i;
        else
            odd = odd +i;
    }
    printf("sum = %d",odd-even);
    


}