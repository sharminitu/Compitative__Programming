#include<stdio.h>
int main()
{
    //int number1,number2,number3,number4,number5;
       
       
        //array declaration
    // int numbers[5]= {20,30,40,50,60};

    int numbers[5],sum=0;
    float average;
    // scanf("%d",&numbers[0]);
    // scanf("%d",&numbers[1]);

    for (int index = 0; index < 5; index++)
    {
        printf("number[%d] = ",index);
        scanf("%d",&numbers[index]);
    }

        // array initatilazation
    // numbers[0] = 20;
    // numbers[1] = 30;
    // numbers[2] = 40;
    // numbers[3] = 50;
    // numbers[4] = 60;

    for(int index=0;index<5;index++){
        // printf("%d\n", numbers[index]);

        sum = sum +numbers[index];
    }

    printf("The sum is %d\n",sum);
    average = (float)sum/5;
    printf("The avarage is %.2f",average);

    // printf("%d\n",numbers[0]);
    // printf("%d\n",numbers[1]);
    // printf("%d\n",numbers[2]);
    // printf("%d\n",numbers[3]);
    // printf("%d\n",numbers[4]);


    return 0;
}