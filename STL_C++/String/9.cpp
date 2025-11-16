#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="ASADAF";

    s.erase(remove(s.begin(),s.end(),'A'),s.end());
    cout<<s<<endl;

}