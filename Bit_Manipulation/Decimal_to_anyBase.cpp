#include<bits/stdc++.h>
using namespace std;
void decimal_to_AnyBase(int n,int base){
    string res ="";
    while(n>0){
        int r =n % base;
        res = to_string(r) +res;
        n/=base;
    }

    cout<< "Converted  Number in Base "<< base << " = "<<res<<endl;
}
int main(){
    int n,base;
    cin>>n>>base;

    decimal_to_AnyBase(n,base);

}