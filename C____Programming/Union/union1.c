//size of union
#include<stdio.h>
union taste1
{
    int x,y;
};

union taste2
{
    char ch;
    int x;
};
union taste3
{
    char name[20];
    double d;
};
struct taste4
{
    int x;
    int y;
    double z;
};
int main()
{
    union taste1 t1;
    union taste2 t2;
    union taste3 t3;
    struct teste4 t4;

    printf("Size of (t1) =%d\n",sizeof(t1));
    printf("Size of (t2) =%d\n", sizeof(t2));
    printf("Size of (t3) =%d\n", sizeof(t3));
    printf("Size of (t3) =%d\n", sizeof(t4));
}