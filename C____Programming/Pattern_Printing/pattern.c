/*
    1st row 1
    2nd row 12
    3rd row 123
*/
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter n =");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }

    return 0;
}