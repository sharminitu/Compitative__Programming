//Multiplication
//first maxtrix col = 2nd matrix row,,if multiplication posible
#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10];
    int r1,r2,c1,c2,i,j,k,sum=0;

    printf("Enter rows and column for first matrix :");
    scanf("%d %d",&r1,&c1);

    printf("Enter rows and column for second matrix :");
    scanf("%d %d", &r2, &c2);

    while(c1!=r2)
    {
        printf("Error !! column first matrix not equal to row of second\n");

        printf("Enter rows and column for first matrix :");
        scanf("%d %d", &r1, &c1);

        printf("Enter rows and column for second matrix :");
        scanf("%d %d", &r2, &c2);
    }
    //taking input for first maxrix
    printf("\nEnter element for first matrix :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++){
            printf("First[%d][%d] =", i, j);
            scanf("%d",&first[i][j]);
        }
    }
    // taking input for second maxrix
    printf("\nEnter element for second matrix :\n");
     for (i = 0; i < r2; i++)
        
    {
        for (j = 0; j < c2; j++)
        {
            printf("Second[%d][%d] =", i, j);
            scanf("%d",&second[i][j]);
        }
    }
    //multiplying matrix
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
            sum = sum + first[i][k] *second[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    //printig maxtix
    printf("\nFirst Matrix\n");
    for (i = 0; i < r1; i++)
    {
        printf("\t");
        for (j = 0; j < c1; j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }
    printf("Second Matrix\n");
    for (i = 0; i < r2; i++)
    {
        printf("\t");
        for (j = 0; j < c2; j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
    }
    //printing result matrix
    printf("First * sceond =\n");
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