//data_type array_name[row_size][col_size]; 
// int A[3][4];                          0  1  2 3
//                                     0
// number of elements =row*col         1
                    //   =3*3 =12      2
#include<stdio.h>
int main()
{
    int i,j;
    int A[3][4]={{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}