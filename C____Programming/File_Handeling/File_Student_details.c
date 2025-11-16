#include<stdio.h>
int main(){
    FILE *file;
    char name[10];
    int age,phNum,n;

    file= fopen("student.txt","a");

    if(file==NULL){
        printf("File Does not Exit");
    }
    else{

        printf("File is open\n");

        printf("Enter Number of Student :");

        scanf("%d",&n);

        for(int i=0;i<n;i++){
            printf("Enter Student Name :");
            gets(name);
            printf("Enter Age");
            scanf("%d",&age);

            printf("Enter Phone Number :");
            scanf("%d", &phNum);

            fprintf(file,"\n%s\t%d\t %d\n",name,age,phNum);
        }
        fclose(file);
    }
}