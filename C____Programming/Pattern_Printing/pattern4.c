/*ascii value A=65,a=97; A=col+64 ,
                A               a
                A B             a b
                A B C =col+64;  a b c=col+96;
*/
#include<stdio.h>
 int main()
{
    int n, row, col;
    printf("Enter n =");
    scanf("%d", &n);
                
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%c ", col+64);
        }
        printf("\n");
    }
    return 0;
}

