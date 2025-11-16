#include<iostream>
using namespace std;
int main()
{
    int a,c=0;
    cin>>a;
    while(a!=0){
        a = a/10;
        c++;
    }
    cout<<c<<endl;
}