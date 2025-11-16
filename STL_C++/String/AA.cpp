#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    
    optimize();
    int n;

    cin>>n;

    vector<string>s;

    
    for(int i=0;i<n;i++){

        string a;
        getline(cin,a);

        s.push_back(a);
    }

    

    sort(s.begin(),s.end());

    for(auto u: s){
        cout<<u<<endl;
    }
    cout<<endl;

    reverse(s.begin(),s.end());

    for(auto u:s){
        cout<<u;
    }

    s.erase(s.remove(s.begin(),s.end(),'a'),s.end());


 
}