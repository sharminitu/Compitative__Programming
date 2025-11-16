#include<stdio.h>
int find_min(int ara[],int n)
{
   int min=ara[0];
   int i;
   for(i=1;i<n;i++)
   {
    if(ara[i]<min)
    {
        min=ara[i];
    }
   }
   return min;

}
int main()
{
    int ara[]={100,400,50,67,87,45,34,67,89,34,67,45};
    int n=12;
    int min = find_min(ara,n);
    printf("%d\n",min);
    return 0;
}