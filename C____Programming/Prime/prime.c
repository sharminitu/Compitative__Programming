#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main()
{
    int number,count=0,i;

    printf("Enter Any Number :");
    scanf("%d",&number);

    if(number <=1){
        count++;
    }
    else{
            for(int i=2;i<=sqrt(number); i++){
                if(number%i==0){
                    count++;
                    break;
            }

        }
    }
        if(count==0){
        printf("%d is a prime number\n",number);
    }
        else{
        printf("%d is not a prime number\n",number);
    }




    return 0;
}