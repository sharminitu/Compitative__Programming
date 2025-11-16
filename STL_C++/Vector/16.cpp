#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    vector<int> v;
    for (int i = 0; i < a; i++)
    {
        int b;
        cin >> b;
        v.push_back(b);
    }
    cout << endl;

    cout << "Before Reverse" << endl;

    for (int i = 0; i < a; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    reverse(v.begin(), v.end());

    cout << "After Reverse" << endl;

    for (int i = 0; i < a; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}