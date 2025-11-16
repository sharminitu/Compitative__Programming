#include<iostream>
using namespace std;
void sum(int a,int b){//formal parameter
    cout << a + b;
}
   

int main()
{
    int a,b;
    cin>>a;
    cin>>b;

    sum(a,b);//actul parameter,,,,pass by value
}