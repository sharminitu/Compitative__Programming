#include<bits/stdc++.h>
using namespace std;
int hex_to_decimal(char ch){
    if(ch>='0'&&ch<='9'){
        return ch - '0';
    }

    if (ch >= 'A' && ch <= 'F')
    {
        return ch - 'A' + 10;
    }

    if (ch >= 'a' && ch <= 'f')
    {
        return ch -'a' + 10;
    }

    return -1;
}
int main(){

    string  Hex;

    cin>>Hex;

    int decimal =0,base=1;

    for(int i= Hex.length() - 1 ; i >= 0 ; i--){
        int digit = hex_to_decimal(Hex[i]);

        decimal += digit*base;
        base*= 16;
    }

    cout<< "Decimal :" << decimal <<endl;
    return 0;

}