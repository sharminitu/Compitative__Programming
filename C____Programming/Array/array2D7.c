//sum of diagonal elements =ararari man gula
#include<stdio.h>
int main()
{int A[3][3],i,j,row,col,sum=0;
printf("Enter the elements of matrix\n");
for (i = 0; i < 3; i++)
{
    for (j = 0; j < 3; j++)
    {
        printf("A[%d][%d]=", i, j);
        scanf("%d", &A[i][j]);
    }
}
printf("\nA matrix =\n");
for (i = 0; i < 3; i++)
{
    printf("\t");
    for (j = 0; j < 3; j++)
    {
        printf("%d ", A[i][j]);
    }
    printf("\n");
}
//sum of diagonal elements
printf("Diagonal Elements : ",A[i][j]);
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        if(i==j)
        {
            printf("%d ",A[i][j]);
            sum = sum +A[i][j];
        }
        
    }
    
}
printf("\nSum of diogonal elemwnts = %d\n", sum);
}