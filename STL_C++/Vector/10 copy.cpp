#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 3, 5, 5, 7, 7, 1};

    int it =max_element(v.begin(),v.end())-v.begin();

    cout<<it<<endl;


    
}