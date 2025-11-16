#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>id;

    id["sharmin"]=7;
    id["momo"] = 3;
    id["sharif"] = 6;
    id["sharif"] = 7;
    id["dima"] = 9;

    for(auto u:id){
        cout<<u.first<<" "<<u.second<<endl;
    }

    
}