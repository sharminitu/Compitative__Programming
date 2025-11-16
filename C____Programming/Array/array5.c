// a[0],a[1],a[2];
//  a[0]=4;
//  a[1]=8;
//  a[2]=7;
//  a[3]=8;
//  a[4]=9;
//write a programe that read 10 numbers disply their sum and avg
#include<stdio.h>
int main()
{
    int a[100],sum=0,i,n;

    printf("How many numbers :");
    scanf("%d",&n);

    printf("Enter numbers ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum =sum+a[i];
    }
    printf("sum is %d\n",sum);
    printf("avg is %.2lf\n",(float)sum/n);


    
    return 0;
}