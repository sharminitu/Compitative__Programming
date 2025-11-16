#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter n= ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)//number of row
    {
        for(col=1;col<=n-row;col++)//printing of speace
        
            printf(" ");

        for(col=1;col<=row;col++)
            
            printf("* ");
            
        printf("\n");
    }
    for (row = n-1; row >=1; row--) // number of row
    {
        for (col = 1; col <= n - row; col++) // printing of speace

            printf(" ");

        for (col = 1; col <= row; col++)

            printf("* ");

        printf("\n");
    }

        return 0;
}