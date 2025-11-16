#include<bits/stdc++.h>
using namespace std;
int main(){
    int  n;
    cin>>n;

    int ones = __builtin_popcount(n);

    cout<<"Number of 1s in Binary :"<<ones<<endl;
 
    cout<<"binary of "<<n<<" is :"<< bitset<32>(n)<<endl;

    string s;
    cin>>s;

    int m  = stoi(s,0,2);//base 2

    cout<<n<<endl;

}