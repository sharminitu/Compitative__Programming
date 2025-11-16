#include <bits/stdc++.h>
using namespace std;
int main()
{
    // set er String

    set<pair<int, int>> s;

    s.insert(2,3);
    s.insert(4,1);
    s.insert(4,1);
    s.insert(2,1);
    s.insert(5,1);
    s.insert(4,3);
    s.insert(5,1);
    s.insert(5,4);
    s.insert(5,3);

    cout << s.size() << endl;

    for (auto u : s)
    {
        cout << u.first<<" "<<u.second<<endl;
    }
}