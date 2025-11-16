#include<stdio.h>
int main(){
    /*
    To Write Somtthing          To read something
    fputc()                     fgetc()
    fputw()                     fgetw()
    fputs()                     fgets()
    fprint()                    fscanf()
    fwrite()                    fread()
    */

   FILE *file;
   file = fopen("test.txt","w");

   if(file==NULL){
    printf("File doesn't exist\n");
   }
   else{
    printf("File is open\n");
    fclose(file);
   }
}