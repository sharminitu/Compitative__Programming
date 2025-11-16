#include<stdio.h>
int main()
{
    int first[10][10], second[10][10], sum = 0, result[10][10];
    int i,j,k,r1,r2,c1,c2;

    printf("Enter the row and coloumn for first matrix :");
    scanf("%d %d",&r1,&c1);
    printf("Enter the row and coloumn for second matrix:");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error !! colum first matrix is not equal to row of second matrix.\n");
        
        printf("Enter the row and coloumn f0r first matrix : ");
        scanf("%d %d", &r1, &c1);
        printf("Enter the row and coloumn for second matrix ");
        scanf("%d %d",&r2,&c2);
    }

    //taking input 
    printf("\nEnter the elements of first matrix :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("first[%d][%d]=",i,j);
            scanf("%d",&first[i][j]);
        }
    }
    printf("\nEnter the elements of second maxtrix :\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<r2;j++)
        {
            printf("Second[%d][%d]=",i,j);
            scanf("%d",&second[i][j]);
        }
    }
    // multipling
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                sum = sum + first[i][k] * second[j][k];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    //printing
    printf("\nfirst matrix\n");
    for(i=0;i<r1;i++)
    {
        printf("\t");
        for(j=0;j<c1;j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }
    printf("\nsecond matrix\n");
    for (i = 0; i < r2; i++)
    {
        printf("\t");
        for (j = 0; j < c2; j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
    }
    printf("\nResult=first*second\n");
    for (i = 0; i < r1; i++)
    {
        printf("\t");
        for (j = 0; j < c2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}