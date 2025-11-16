#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main()
{
    int number, count = 0,totalprimenumbers=0,sumofprimenumbers=0
    ,startingnumber,endingnumber;

    printf("Enter starting Number :");
    scanf("%d",&startingnumber);
    printf("Enter ending Number :");
    scanf("%d",&endingnumber);

    for(number =startingnumber; number<=endingnumber; number++){
        count =0;
        if(number<=1){
        count=1;
        }
            else{
                for(int i=2; i<=sqrt(number); i++){
                if(number%i==0){
                    count=1;
                    break;
                }
            }
        }
            if(count==0){
                printf("%d ",number);
                totalprimenumbers++;
                sumofprimenumbers = sumofprimenumbers +number;
        }
    }

    printf("\nTotal prime numbers: %d\n", totalprimenumbers);
    printf("sumofprimenumbers : %d\n",sumofprimenumbers);

    return 0;
}

// 1.Check a number is prime or not
// 2.print a number is prime number form (1-100)
// print,count abdsum of prime numbers form 1 to 100
// print,count abdsum of prime numbers form m to n
// m=starting ,n=ending