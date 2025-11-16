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

    pair<int, int> p;

    p = make_pair(2,3);
    cout << p.first << " " << p.second << endl;


    p.first++;

    cout<<p.first<<" "<<p.second<<endl;

    pair<string,vector<int>>q;

    q={"sharmin",{2,3,4,5}};
    cout << q.first << " " << q.second.size() << endl;
}
