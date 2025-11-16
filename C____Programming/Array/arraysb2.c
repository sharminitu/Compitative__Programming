#include<stdio.h>
int main()
{
    int total_marks[]={20,20,40,50,60,70,60,50,40,60,40,50,30,30,20,30,50,30,50};
    int i,marks_count[101];
    for(i=0;i<=101;i++)
    {
        marks_count[i] = 0;
    }
    for(i=0;i<20;i++)
    {
        marks_count[total_marks[i]]++;
    }
    for(i=20;i<=100;i++){
        printf("Marks:%d count : %d\n",i,marks_count[i]);
    }
    return 0;
}