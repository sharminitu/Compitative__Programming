#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){

    optimize();

    string s = "deahcbbbb";

    sort(s.begin(),s.end());
    cout << s << endl;
    
    sort(s.begin(), s.end());
    int sz = unique(s.begin(),s.end())-s.begin();

    for(int i=0;i<sz;i++){
        cout<<s[i];
    }
    cout<<endl;
    sort(s.rbegin(), s.rend());
    cout << s << endl;

    cout<<*max_element(s.begin(),s.end())<<endl;

    cout<<*min_element(s.begin(),s.end())<<endl;

    s.erase(s.begin());//o(n)

    cout<<s<<endl;

    s.erase(s.end()-1);

    cout<<s<<endl;
}