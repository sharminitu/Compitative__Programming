#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
int main()
{

    optimize();
    // string s ="Aeemon",t="eemomo";

    // if(s<t)cout<<s<<" "<<"is smallest"<<endl;
    // else cout<<t<<" "<<"is smallest"<<endl;

    vector<string>v;
    v.push_back("Sharmin");
    v.push_back("Sultana");
    v.push_back("itu");
    v.push_back("DAFFodil");
    v.push_back("Programming");

    sort(v.begin(),v.end());

    for(auto u :v){
        cout<<u<<endl;
    }

    sort(v.rbegin(), v.rend());

    for (auto u : v)
    {
        cout << u << endl;
    }
}