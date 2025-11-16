#include <bits/stdc++.h>
using namespace std;
int main()
{
    // unordered_set<int> s = {1, 1, 3, 3, 2, 2};
    set<int> s = {1, 1, 3, 3, 2, 2};

    set<int>::iterator it;

    // for (it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;

    cout << s.size() << endl;

    for (auto u : s)
    {
        cout << u << " ";
    }
    cout << endl;

    s.clear();

    cout << s.empty() << endl;

    s.insert(2);
    s.insert(2);
    s.insert(4);
    s.insert(1);

    cout << s.size() << endl;
    for (auto u : s)
    {
        cout << u << " ";
    }
    cout << endl;
}