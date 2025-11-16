#include<stdio.h>
#include<math.h>

void calculatePower(double base,double exp)
{
    double i,result=1;
    
    for (i = 1; i <= exp; i++)
    {
        result = result * base; // result = 1*2=2
    }
    printf("%.1lf\n", result);
}

int main()
{
    double base,exp;

    scanf("%lf",&base);
    scanf("%lf",&exp);

    calculatePower(base,exp);
    return 0;

    // for(i=1;i<exp;i++){
    //     result =result*base;//result = 1*2=2
    // }
    // printf("%.1lf\n",result);
}