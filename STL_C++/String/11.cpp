#include<bits/stdc++.h>
using namespace std;
int main(){
    int a =123;//int to string
    string s = to_string(a);
    cout<<s<<endl;

    s[0]='2';
    cout<<s<<endl;

    string sh ="345";//string to int 
    int b = stoi(sh);

    cout<<b<<endl;
    b++;
    cout<<b<<endl;

}