#include <bits/stdc++.h>
using namespace std;
int main()
{
    // set er String

    set<int,greater<int>> s;

    

    s.insert(2);
    s.insert( 1);
    s.insert(4);
    s.insert(2);
    s.insert(6);
    s.insert(5);
    s.insert(7);
    s.insert( 3);

    cout << s.size() << endl;

    for (auto u : s)
    {
        cout << u<<" ";
    }
    cout<<endl;

    set<string,greater<string>>s1;

    s1.insert("sharmin");
    s1.insert("proma");
    s1.insert("momo");
    s1.insert("sobuj");
    s1.insert("nobel");
    s1.insert("sharmin");
    s1.insert("momo");
    s1.insert("prity");
    s1.insert("nobel");

    for (auto u : s1)
    {
        cout << u <<endl;
    }
    
    
}