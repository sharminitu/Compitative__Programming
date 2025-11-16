//linear searching
#include<stdio.h>
int main()
{
    int num[]= {20,34,76,45,78,34,67,35};
    int value;
    printf("Enter the value you want to search :");
    scanf("%d",&value);
    int position = -1;
    int i;

    for(i=0;i<9;i++)
    {
        if(value==num[i]){
            position=i+1;
            break;
        }
    }
    if(position==-1)
    {
        printf("NOT FOUND");
    }

    else
        printf("The position of %d is : %d\n",value,position);

    return 0;
}
