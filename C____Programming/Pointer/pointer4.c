#include <stdio.h>
int main()
{
    int x = 20, y = 10, swap;

    int *ptr, *ptr1;

    ptr = &x;
    ptr1 = &y;

   //swwaping 
    swap = *ptr;
    *ptr = *ptr1;
    *ptr1 =swap;

    printf("x= %d y=%d\n", x,y);

    return 0;
}