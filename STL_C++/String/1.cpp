#include<bits/stdc++.h>
using namespace std;
int main(){
    string c="Sharmin";
    string s;

    c[0]='y';

    cout<<c[0]<<" "<<c[1]<<" "<<c[2]<<" "<<endl;

    c+=' ';
    c+='a';

    s=s+'a';//s='a' 
    s=s+'b';//s='ab'
    s=s+'c';//s='abc';


    cout<<c<<endl;
    cout<<c.size()<<endl;

    cout<<s<<endl;

}