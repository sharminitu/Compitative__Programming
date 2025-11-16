#include<stdio.h>
#include<string.h>
int main()
{
    char S[1002],word[100];
    int i,j,length,is_word_started;
    gets(S);         
    length=strlen(S);
    is_word_started = 0;
    for(i=0,j=0;i<length;i++)
    {
        if(S[i]>='a'&& S[i]<='z')
        {
            if(is_word_started == 0)
            {
                is_word_started =1;
                word[j]='A'+S[i]-'a';//first character is capital
                j++;
            }
            else{
                word[j]=S[i];
                j++;
            }
        }
        else if(S[i]>='A'&&S[i]<='Z')
        {
            if(is_word_started ==0)
            {
                is_word_started =1;
            }
            word[j]=S[i];
            j++;
        }
        else if(S[i]>='0'&&S[i]<='9')
        {
            if(is_word_started==0)
            {
                is_word_started=1;
            }
            word[j] =S[i];
            j++;
        }
        else
        {
            if(is_word_started==1)
            {
                is_word_started =0;
                word[j]='\0';
                printf("%s\n",word);
                j=0;
            }
        }
    }
    return 0;
}