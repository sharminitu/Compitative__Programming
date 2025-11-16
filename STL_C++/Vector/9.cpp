#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,3,5,5,7,7,1};

    sort(v.begin(),v.end());//O(nlog(n));
    int sz = unique(v.begin(),v.end())-v.begin();//o(n)

    cout<<sz<<endl;
    for(int i=0;i<sz;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    for(auto u:v){
        cout<<u<<" ";
    }
    cout<<endl;
}