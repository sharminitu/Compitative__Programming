#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];

    vector<int> v = {2, 3, 4, 5};

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    for (auto u : v)
    {
        cout << u << " ";
    }
    cout << endl;

    cout<<endl;
}