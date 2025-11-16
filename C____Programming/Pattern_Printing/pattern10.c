#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter n =");
    scanf("%d",&n);
    
    for(row = 1; row<=n;row++)
    {
        //printf=speace
        for(col=1;col<=n-row;col++)
        {
            printf(" ",col);
        }
        //printf= number
        for(col=1;col<=row;col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    return 0;
}