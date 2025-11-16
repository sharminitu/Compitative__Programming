#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter n=");
    scanf("%d",&n);

    for(row=1;row<=n;row++)//number of row
    {
        for(col=1;col<=n-row;col++)
        {
        printf("  "); // printing specce
        }
        for(col=1;col<=2*row-1;col++)
        {
            printf("%d ",col);
        }
        printf("\n");

    }
    return 0;
}