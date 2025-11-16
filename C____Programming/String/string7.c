#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "Sharmin Sultana";
    char str2[] = "Sharmin";

   int d = strcmp(str1,str2);

   if(d==0)
   {
        printf("string are equal");
   }
    else{
        printf("string are not equal");
   }
}