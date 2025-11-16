#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=2;
    int &b =a;
    int &c=b;

    b=3;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    bool x =true;
    bool &y=x;

    cout<<&x<<endl;
    cout<<&y<<endl;
}