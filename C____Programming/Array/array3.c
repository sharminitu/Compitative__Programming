#include<stdio.h>
int main()
{
    int numbers[] = {12,14,};
    int lengthofarray = sizeof(numbers)/sizeof(numbers[0]);

    //printf("%d",lengthofarray);

    if(lengthofarray < 2){
        printf("Array should have at least 2 elements.\n");
    }
    int first,second;
    if (numbers[1] > numbers[0]){
        first = numbers[1];
    second = numbers[0];
    }
    else{
        first = numbers[0];
        second = numbers[1];
    }

    for(int index =2;index< lengthofarray;index++){
        if(numbers[index]>first){
            first<numbers[index];
        }
    }
    printf("First lergest = %d\n",first);
    printf("second lergest= %d\n",second);

    return 0;
}
//first and 2nd lergest number