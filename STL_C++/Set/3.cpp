#include<bits/stdc++.h>
using namespace std;
int main(){
    //set er String 

    set<string>s;

    s.insert("sharmin");
    s.insert("proma");
    s.insert("momo");
    s.insert("sobuj");
    s.insert("nobel");
    s.insert("sharmin");
    s.insert("momo");
    s.insert("prity");
    s.insert("nobel");

    cout<<s.size()<<endl;

    for(auto u:s){
        cout<<u<<endl;
    }


}