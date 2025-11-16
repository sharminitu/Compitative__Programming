#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;//1,3,5.7,8

    for(int i=1;i<=2*a-1;i=i+2){
        cout<<i<<endl;
    }
    return 0;
}