#include<stdio.h>
int main()
{
    double num1,num2;
    char oper;

    printf("Enter an operator (+,-,*,/) : ");
    scanf("%c",&oper);

    printf("Enter Two Numbers : ");
    scanf("%lf %lf", &num1, &num2);

    switch(oper)
    {
        case '+' :
        {
            printf("%lf +%lf =%lf\n",num1 ,num2, num1+num2);
            break;
        }
        case '-':
        {
            printf("%lf-%lf =%lf\n",num1, num2, num1-num2);
            break;
        }
        case '*':
        {
            printf("%lf *%lf =%lf\n",num1 ,num2, num1*num2);
            break;
        }
        case '/':
        {
            printf("%lf /%lf =%lf\n",num1, num2, num1/num2);
            break;
        }

        default :
            printf("Not a valid operator\n");
    }

    return 0;
}