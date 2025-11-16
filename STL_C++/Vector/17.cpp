#include <bits/stdc++.h>
using namespace std;
int main()
{
    //iteration;
    int a;
    cin >> a;
    vector<int> v;
    for (int i = 0; i < a; i++)
    {
        int b;
        cin >> b;
        v.push_back(b);
    }
    
    vector<int>::iterator it;

    for(it =v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }

    it=v.begin()+1;

    cout<<*it<<endl;



}