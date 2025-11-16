#include<stdio.h>
int main()
{
    float v, t,s;          
    
    
    printf("Enter the value of V ="); //s=vt,s=ut+1/2at*t,v=u+at
    scanf("%f",&v);
    printf("Enter the value of T="); 
    scanf("%f",&t);

    s=2*t*v; // 2t ar S=u*2t+0.5a*(2t)^2
              //      S=2t(u+at)
    printf("%.2f",s);//S=2t*v

    

    return 0;
}