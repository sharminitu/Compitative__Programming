#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Any letter :");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
         printf("small letter");

    else if(ch>='A' && ch<='Z')
         printf("captial letter");
    
    else
         printf("Not a letter");


    return 0;
}