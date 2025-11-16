#include<stdio.h>
int main()
{
    int numbers[] = {20,40,1,100,98,-4};
    int scarchnumber = 100;
    int second = numbers[0];
    int found = -1; 

    for(int index=0;index<6;index++){
        if(numbers[index] == scarchnumber){
            found = index;
            break;
        }
    }
    if(found ==-1){
        printf("Not Found",scarchnumber);
    }
    else{
        printf("Found",scarchnumber,found);
    }
    return 0;
}