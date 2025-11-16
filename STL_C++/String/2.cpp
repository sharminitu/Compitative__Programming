#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string s1 ="Sharmin",s2="Sultana";

    char c =' ';

    s= s1+c+s2;
    s1+=c;
    s1+=s2;
    s1+="itu";

    cout<<s<<endl;
    cout<<s1<<endl;

    s1.clear();

    cout<<s1<<endl;

    s1 =s2;

    cout<<s1<<endl;

    cout<<s1.empty()<<endl;

    cout<<s1<<endl;

}