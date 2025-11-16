#include<stdio.h>
int main()
{
    int num,r,temp,sum=0;
    printf("Enter any Number =");
    scanf("%d",&num);

    temp =num;
    while(temp!=0)
    {
        r = temp % 10;
        sum += r*r*r;
        temp /=10;
    }
    if(sum==num){
        printf("%d Armstrong Number ",num);
    }
    else{
        printf("%d Not Armstrong Number ",num);
    }
    
    return 0;
}
