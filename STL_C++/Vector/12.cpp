#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[1000];
    vector<int> v;  // declearation
    v.push_back(1); // v[0]
    v.push_back(2); // v[1]
    v.push_back(3); // v[2]
    v.push_back(4); //v[3];
    v.push_back(5);//v[5];
    cout << v[0] << " ";
    cout << v[1] << endl;


    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;

    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;

    v.erase(v.begin()+2);
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    v.erase(v.begin() + 2, v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}