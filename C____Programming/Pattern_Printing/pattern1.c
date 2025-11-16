/*
    1st row 1
    2nd row 2 2
    3rd row 3 3 3
*/
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter n=");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",row);
        }
        printf("\n");
    }


}