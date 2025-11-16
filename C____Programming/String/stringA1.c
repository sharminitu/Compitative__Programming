#include<stdio.h>
int main()
{
    char country[20]={'B','a','n','g','l','a','d','e','s','h'};
    // // char country[] ="Bangladesh";
    // char * country = "Bangladesh";

    int i=0,length=0;
    printf("%s\n",country);
    
    while (country[i] != '\0')
    {
        length++;
        i++;
    }

    for(i=0;i<length;i++){
        if(country[i]>=97 && country[i]<=122){
            country[i]='A'+ (country[i] -'a');
        }
    }
    
    printf("%s\n",country);
    printf("%d\n",length);

    return 0;
}