#include<stdio.h>
#include<string.h>
int main()
{
    char str1[15]="Bangladesh";
    char str2[15] = "India";

    printf("Before swappiing\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    char temp[15];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("\nAfter swapping\n");
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);

    return 0;
}