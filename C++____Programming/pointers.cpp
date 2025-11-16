#include<iostream>
using namespace std;
int main(){
    int x=5;
    int*p =&x;
    cout << &x << endl; // print address using &
    cout<<p<<endl;
    cout << *p << endl; //star operator
}