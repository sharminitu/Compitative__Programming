#include<stdio.h>
int main(){
    int x = 5;

    int *p;
    p = &x;
    printf("value of x =%d\n",x);
    printf("Adress of X =%u\n", &x);
    printf("Adress of X =%x\n", &x);
    printf("Adress of P =%d\n", p);
    printf("Content of p =%d\n", *p);
    printf("Address of p =%d\n", &p);
    return 0;
}