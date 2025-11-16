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

    pair<int, int> p[]={{6,5},{2,3},{4,5},{6,1},{1,9}};

    sort(p,p+5);

    for(int i=0;i<5;i++){
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }

}