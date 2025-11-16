#include<bits/stdc++.h>
using namespace std;

// int cnt[100123];
int main(){
    // vector<int>v ={2,2,3,4,2};

    // for(auto u:v){
    //     cnt[u]++;//cnt[v[i]]++;
    // }

    map<string,int>id;
    id["Sharmin"]=1;
    id["Momo"]=3;
    id["Sharif"]=4;
    id["pritey"]=9;

    cout<<id["Sharmin"]<<endl;

    map<string,string>gender;

    gender["Sharmin"]="Female";
    gender["Sharif"]="Male";

    cout<<gender["Sharif"]<<" "<<gender["Sharmin"]<<endl;
}