#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

// struct pair{
//     int first,second
// };
int main()
{
    optimize();

    pair<int, int> p1,p2;

    p1={3,3};
    p2={1,5};

    // if(p1<p2){
    //     cout<<"Yes";
    // }
    // else{
    //     cout<<"No";
    // }

    pair<int,int>p=min(p1,p2);

    cout<<p.first<<" "<<p.second<<endl;


        vector<pair<string, int>> v;

        v.push_back({"Sharmin", 5});
        v.push_back({"momo", 3});
        v.push_back({"itu", 7});
        v.push_back({"sharif", 1});
        v.push_back({"Sharmin", 9});
        v.push_back({"momo", 3});

        sort(v.begin(), v.end());

        for (auto u : v)
            cout << u.first << " " << u.second << endl;

        sort(v.begin(), v.end());

        int sz = unique(v.begin(),v.end())-v.begin();

        for(int i=0;i<sz;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
}

       
        // sort(v.rbegin(), v.rend());

        // for (auto u : v)
        //     cout << u.first << " " << u.second << endl;
    }

