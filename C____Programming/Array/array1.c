#include<stdio.h>
int main()
{
    int numbers[] = {20,40,1,100,98-4};

    int maximum = numbers[0];
    int minimum = numbers[0];

    for(int index=1;index<6;index++){
        if(maximum<numbers[index]){
            maximum = numbers[index];
        }
        if (minimum > numbers[index])
        {
            minimum = numbers[index];
        }
    }


    printf("maximum number is %d\n",maximum);
    printf("minimum number is %d\n", minimum);
    return 0;
}