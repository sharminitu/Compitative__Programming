#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// struct pair{
//     int first,second
// };
int main(){
    optimize();

    pair<int,int>p;

    p.first =2;
    p.second = 3;

    pair<string,int>q;

    q.first ="sharmin";
    q.second =7;

    pair<string, vector<int>> r;

    r.first = "sharmin";
    r.second = {3,4,5};

    cout<<r.first<<endl;

    for(auto u:r.second){
        cout<<u<<" "<<endl;
    }
}

