#include<stdio.h>
int main(){

    FILE *file;

    char name[20];

    file = fopen("test.txt","w");

    if(file ==NULL){
        printf("File Doesn't exit \n");
    }
    else{
        printf("File is open\n");
        printf("Enter Your Full Name");
        gets(name);

        fputs(name,file);
        printf("file is Written Sucesssfully \n");
        fclose(file);

    }
    getch();
}