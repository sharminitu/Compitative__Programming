//Factorial Of N;
#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{

    if(n==0)return 1;
    return fact(n - 1)*n;
}
int main()
{

    int n;
    cin>>n;
    cout<<fact(n);
}

//1.number of function call.->n
//2.what is complexity of each function.