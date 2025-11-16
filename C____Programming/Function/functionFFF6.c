#include<stdio.h>
void display_string(char S[])
{
    int i=0;
    while(S[i]!='\0')
    {
        
        printf("%c\n",S[i]);
        i++;
    }
}
int main()
{
    char str[] = "Sharmin";
    display_string(str);
}