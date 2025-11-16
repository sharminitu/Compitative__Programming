#include <stdio.h>
int main()
{

    FILE *file;

    char name[40] ="sharmin";

    file = fopen("test.txt", "w");

    if (file == NULL)
    {
        printf("File Doesn't exit \n");
    }
    else
    {
        printf("File is open\n");
        while(!feof(file)){   
        fgets(name,35,file);//variable,size,file pinter
        printf("%s",name);
        }
        printf("file is Written Sucesssfully \n");
        fclose(file);
    }
    getch();
}