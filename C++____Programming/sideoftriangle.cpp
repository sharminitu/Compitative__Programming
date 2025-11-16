#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;cin>>b;cin>>c;

    if(a+b>c and a+c>b and b+c>a){
        cout<<"Valid Triangle";
    }
    else{
        cout<<"Invalid Triangle";
    }
}