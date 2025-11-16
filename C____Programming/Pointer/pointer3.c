#include <stdio.h>
int main()
{
    int x = 20, y = 10, z = 30,sum;

    int *ptr,*ptr1;

    ptr = &x;
    ptr1 = &y;

    sum =*ptr +*ptr;

   
    printf("Sum =%d\n",sum);

    return 0;
}