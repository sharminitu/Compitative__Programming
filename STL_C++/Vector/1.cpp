#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4];
    vector<int>v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    vector<int>v = {2,3,4,5};



    v[3] =10;

    cout<<v[3]<<endl;
    cout<<v.size()<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<< " ";
    }
    cout<<endl;
}