#include<iostream>
using namespace std;
int main(){
    int i;
    int a[]={12,45,76,88,67,56,87,98};
    int n=sizeof(a)/4;
    int b[n];
    for(int i=0;i<n;i++){
        int j= n-1-i;
        b[i]=a[j];
    }
    for(i=0;i<n;i++){
        cout<<b[i]<<" ";
    }

}