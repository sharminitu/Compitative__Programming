#include <bits/stdc++.h>
using namespace std;
int findfrequecy(vector<int>v,int x){
    map<long long,int>cnt;

    for(auto u:v)cnt[u]++;
    return cnt[x];
}

int main()
{
    vector<int>v,x;
 
}