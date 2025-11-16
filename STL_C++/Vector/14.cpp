#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v1;
    vector<int>v2;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v1.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        v2.push_back(b);
    }

    cout<<"Before swaping"<<endl;

    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i]<<" ";
    }
    cout<<endl;

    swap(v1, v2);//swap value


    cout << "After swaping" << endl;

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i]<<" ";
    }
    cout<<endl;

   
}