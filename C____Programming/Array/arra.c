// // #include<stdio.h>
// // int main(){
// //     int a[10],i,sum=0;
// //     for(i=0;i<10;i++)
// //     {
// //         scanf("%d",&a[i]);
// //     }
// //     for(i=0;i<10;i++)
// //     {
// //         sum = sum+a[i];
// //     }
// //     printf("%d",sum);

// // }


// #include<stdio.h>
// int main()
// {
//     int ara[]={34,65,87,55,77,67,97,45};

//     int max = ara[0],i;
//     int min = ara [0];

//     for(i=1;i<=8;i++)
//     {
//         if(ara[i]>max)
//         {
//             max = ara[i];
//         }
//          if(min>ara[i])
//         {
//             min = ara [i];
//         }
//     }
//     printf("max = %d\n",max);
//     printf("min = %d\n",min);
// }
#include<stdio.h>
int main()
{
    int a[5],b[5],ab[5];

    int i;
     printf("Enter the value of a\n = ");
     for(i=0;i<5;i++)
     {
        scanf("%d",&a[i]);
     }
     printf("Enter the value of b\n = ");
     for (i = 0; i < 5; i++)
     {
         scanf("%d",&b[i]);
     }
     for(i=0;i<5;i++)
     {
        ab[i]=a[i]+b[i];
     }

     printf("Value of Ab array :\n");

     for(i=0;i<5;i++)
     {
        printf("%d\n",ab[i]);
     }
}