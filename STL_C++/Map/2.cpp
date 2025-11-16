#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<long long> v = {5, 7, 65437436543765, 645468548765, 645468548765, 8768768978};

    map<long long,int>cnt;

    for(int i=0;i<v.size();i++){
        cnt[v[i]]++;
    }

    cout << cnt[645468548765]<<endl;


    for (auto u : v)
    {
        cnt[u]++;
    }

    for(auto u:cnt){
        cout<<u.first<<" "<<u.second<<endl;
    }
}