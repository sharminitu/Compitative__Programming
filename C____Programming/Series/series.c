//1,2,3,4.......=i++,i=1
//2,4,6,8.......=  i=i+2,i=2
//1,3,5,7.......= i=1,i=i+2
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter n=");
    scanf("%d",&n);

    for(i=1;i<=n;i=i+2)
    {
        printf("%d ",i);
    }
    return 0;
}