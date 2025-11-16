#include<stdio.h>
double pi = 3.14;
void my_fnc()
{
    pi = 3.1416; // here pi value changed;
    return; // when function have return type void return; not not mandatory
}
int main()
{
    printf("%lf\n",pi); // here pi = 3.14
    my_fnc();
    printf("%lf\n",pi);//here pi = 3.1416 because we changed pi value by my_fnc function
    return 0;
}