#include<bits/stdc++.h>
using namespace std;
int  main(){
    long long  binary;
    int  decimal =0,base  = 1;

    cout<<"Enter a Binary Number :";
    cin >> binary;

    while(binary>0){
        int last_digit = binary %10;
        decimal += last_digit *base;

        base*=2;
        binary/=10;

        cout<<decimal<<endl;
    }

    cout<<"Decimal = "<<decimal<<endl;

    return 0;
}