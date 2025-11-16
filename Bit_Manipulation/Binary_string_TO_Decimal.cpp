#include<bits/stdc++.h>
using namespace std;
int main(){
    string bin;
    cin>>bin;

    int decimal = 0;

    for(int i=0;i<bin.length();i++){
        decimal = decimal *2 +(bin[i]-'0');
    }
    cout<<decimal;
}