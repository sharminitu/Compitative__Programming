#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s = "ASADAF";
    // s.pop_back();
    // cout << s.back()<< endl;
    vector<string>v;
    v.push_back("Sharmin");
    v.push_back("Sharmin");
    v.push_back("Sultana");
    v.push_back("Sultana");
    v.push_back("itu");

    sort(v.begin(),v.end());
    int sz = unique(v.begin(),v.end())-v.begin();

    cout<<sz<<endl;

    for(int i=0;i<sz;i++){
        cout<<v[i]<<endl;
    }


}