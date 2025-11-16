// sum of diagonal elements =ararari man gula
#include <stdio.h>
int main()
{
    int A[3][3], i, j, row, col, uppersum = 0,lowersum=0;
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
    // sum of upper and lower triangle elements
    // printf(" upper and lower Elements : ", A[i][j]);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i < j)
            {
                uppersum = uppersum + A[i][j];
            }
            if(i>j)
            {
                lowersum = lowersum + A[i][j];
            }
        }
    }
    printf("\nSum of upper triangle elemwnts = %d\n", uppersum);
    printf("\nSum of lower tringale elemwnts = %d\n", lowersum);

    return 0;
}
