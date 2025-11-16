#include<bits/stdc++.h>
using namespace std;
int main(){
    long long Octal;
    cin>>Octal ;
    int  Decimal =0,Base=1;

    while(Octal>0){
        int last_digit = Octal%10;
        Decimal += last_digit*Base;
        Base*=8;
        Octal/=10;
    }
    cout<<Decimal<<endl;

}