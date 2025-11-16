/*Given a number  N.print its factorial constraints
1<=N<=100

print answer module M
where M = 10^9+7

A%M
*/
#include<bits/stdc++.h>
using namespace  std;
int main(){
    int n;
    cin>>n;

    long long fact =1;
    int M=47;

    for(int i =2;i<=n;i++){
        fact = (fact*i)%M;
    }
    cout<<fact<<endl;
}