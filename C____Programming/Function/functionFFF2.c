//Area of triangle
#include<stdio.h>
double triangle_area(double b, double h);
int main()
{
    double base,hight;

    printf("Enter Base :");
    scanf("%lf",&base);
    printf("Enter hight:");
    scanf("%lf",&hight);

    double area =triangle_area(base,hight);

    printf("Area = %.lf\n",area); 

    return 0;
}

 double triangle_area(double b, double h)
{
   return 0.5*b*h;
}