#include<stdio.h>
int main()
{
    char str1[50]="MY name is ";
    char str2[]="Sharmin sultana";

    int i=0,len=0,j=0;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    while(str2[j]!='\0')
    {
        str1[len+j]=str2[j];
        j++;
    }

    printf("str1 = %s\n",str1);
}