#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] ={2,3,4,5};

    vector<int>v={2,7,6,3,4,4,8,9};

    sort(a+0,a+4,greater<int>());

    sort(v.begin(),v.end(),greater<int>()); //O(nlog2(n)); complextiy

    sort(v.rbegin(),v.rend());
    for(auto u:v){
        cout<<u<<" ";
    }
    cout<<endl;
    reverse(v.begin(),v.end());
    for (auto u : v)
    {
        cout << u << " ";
    }
}