#include <stdio.h>
int main()
{

    FILE *file;

    char name[20];
    char name1[20];
    int age;

    file = fopen("test.txt", "r");

    if (file == NULL)
    {
        printf("File Doesn't exit \n");
    }
    else
    {
        printf("File is open\n");
      
        fscanf(file,"%s %s %d",&name,&name1,age);//filepointer,formatespcifire,variable name

        printf("%s %s %d\n",name,name1,age);
        fclose(file);
    }
    getch();
}