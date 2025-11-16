#include <stdio.h>
int main()
{

    FILE *file;

    char name[20];
    int age;

    file = fopen("test.txt", "w");

    if (file == NULL)
    {
        printf("File Doesn't exit \n");
    }
    else
    {
        printf("File is open\n");

        printf("Enter Your name :");
        gets(name);

        printf("Enter Your Age :");
        scanf("%d",&age);

        fprintf(file,"Name = %s, age =%d\n",name,age);//file pinter , formatespacpire ,variable name 

        printf("File is Written sucessfully \n");

        fclose(file);
      
    }
    getch();
}