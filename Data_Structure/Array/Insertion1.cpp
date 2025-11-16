#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];

    for (int i = 0; i<n; i++)
    {
        cin >> a[i];
    }

    int p, e;
    cin >> p >> e;

    for(int i=n;i>=p;i--){
        a[i+1] =a[i];
    }
    a[p]= e;

    for(int i=0;i<=n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}