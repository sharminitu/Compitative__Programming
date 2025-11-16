#include<stdio.h>
int main(){
    int x = 10,y=10,z=30;

    int *ptr;

    ptr = &x;
    printf("x=%d\n", ptr);//Adress
    printf("x=%d\n",*ptr);//value
     ptr = &y;
    printf("y=%d\n", ptr);
    printf("y=%d\n", *ptr);

    ptr = &z;
    printf("z=%d\n", ptr);
    printf("z=%d\n", *ptr);

    return 0;
}