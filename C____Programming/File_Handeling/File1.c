#include <stdio.h>
#include<string.h>
int main()
{
    /*
    To Write Somtthing          To read something
    fputc()                     fgetc()
    fputw()                     fgetw()
    fputs()                     fgets()
    fprint()                    fscanf()
    fwrite()                    fread()
    */

    FILE *file;
    char name[20] ="Sharmin Sultana";

    int length = strlen(name);
    int i;

    file = fopen("test.txt", "a");

    if (file == NULL)
    {
        printf("File doesn't exist\n");
    }
    else
    {
        printf("File is open\n");
        for(i=0;i<length;i++){
            fputc(name[i],file);
        }
        printf("File is written sucessfully\n");
        fclose(file);
    }
}