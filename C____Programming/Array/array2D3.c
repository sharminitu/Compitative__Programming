//addition , subtraction
#include<stdio.h>
int main()
{
    int i,j,numberofRows,numberofCols;
    int A[5][6],B[5][6],C[5][6];

    printf("Enter number of rows and cols :");
    scanf("%d %d",&numberofRows,&numberofCols);

    printf("Enter elements of A matrix.\n");
    for(i=0;i<numberofRows;i++)
    {
        for(j=0;j<numberofCols;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("Enter elements of B matrix.\n");
    for (i = 0; i < numberofRows; i++)
    {
        for (j = 0; j < numberofCols; j++)
        {
            printf("B[%d][%d] =", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }
    printf("A = ");
    for(i=0;i<numberofRows;i++)
    {
        printf("\t");
        for(j=0;j<numberofCols;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\nB = ");
    for (i = 0; i < numberofRows; i++)
    {
        printf("\t");
        for (j = 0; j < numberofCols; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    //adding maxrix
    for (i = 0; i < numberofRows; i++)
    {
        for (j = 0; j < numberofCols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];//subtraction =A-B 
        }
        
    }
    printf("\nA + B = ");
    for (i = 0; i < numberofRows; i++)
    {
        
        for (j = 0; j < numberofCols; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
        printf("\t");
    }

    return 0;
}