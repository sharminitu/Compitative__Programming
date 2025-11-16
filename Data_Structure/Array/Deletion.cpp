#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int p;
    scanf("%d",&p);


    for(int i=p;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n=n-1;


    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}