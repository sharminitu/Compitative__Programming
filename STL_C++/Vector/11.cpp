#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[1000];
    vector<int>v;//declearation
    v.push_back(1);//v[0]
    v.push_back(2);//v[1]
    v.push_back(3);//v[2]
    cout<<v[0]<<" ";
    cout<<v[1]<<endl;

    // cout<<v[3];

    // cout<<v.at(3);

    cout<<v.at(0)<<" ";
    cout<<v.at(1)<<endl;

    cout<<v.size()<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<v.front()<<endl;

    cout<<v.back()<<endl;

    v.clear();

    cout<<v.size()<<endl;

    if(v.empty()){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Not Empty"<<endl;
    }

    

}