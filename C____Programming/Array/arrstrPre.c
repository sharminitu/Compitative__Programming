#include<stdio.h>
int main()
{
    int num[]={30,56,87,98,67,56,78,67};
    int i;
    int n=8;
    int max = num[0];
    int min = num[0];
    for(i=0;i<=8;i++)
    {
        if(max<num[i])
        max=num[i];
        else if(min>num[i])
        min = num[i];

    }
    printf("max = %d\n",max);
    
    printf("min = %d\n",min);
}