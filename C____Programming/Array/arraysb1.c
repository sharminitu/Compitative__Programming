#include<stdio.h>
int main()
{
    int ft_mark[]={10,80,45,67,90,45,76,45,34,65,12,34,23,23,75};
    int st_mark[]={23,87,96,86,90,56,87,67,78,97,96,87,89,76,98};
    int final_marks[]={67,98,67,45,87,56,87,45,76,87,98,56,87,87,67};
    int i;
    double total_marks[15];
    for ( i = 0; i <15; i++)
    {
        total_marks[i]= ft_mark[i]/4.0+st_mark[i]/4.0+final_marks[i]/2.0;
    }
    for(i=1;i<15;i++)
    {
        printf("Roll NO: %d\ttotlm_marks:%0.0lf\n",i,total_marks[i-1]);
    }
    
}