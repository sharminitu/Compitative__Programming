//fibonacciii,,,,,,0 1 1 2 3 5 8 13 21 24 45
#include<stdio.h>
int main()
{
    int a[30],n,i;
    printf("Enter the numbers of terms ");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;

    for(i=2;i<n;i++){
        a[i]=a[i-1]+a[i-2];

    }
    printf("\n");

for(i=0;i<n;i++)
{
    printf("%d\n",a[i]);
}
    return 0;
}