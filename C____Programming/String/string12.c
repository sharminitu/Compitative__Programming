#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "Sharmin Sultna";
    char str2[] = "Shanjed hossin";

    strupr(str1);
    strlwr(str2);
    printf("str = %s\n",str1);
    printf("str = %s\n",str2);

    return 0;
}