#include<bits/stdc++.h>
using namespace std;
void seclectionSort(int arr[],int n){
    int c=0;
    int mini;
    for(int i=0;i<n;i++){
        mini =i;
        for(int j=i;j<n;j++){
            if(arr[mini]>arr[j]){
                mini = j;
            }
        }
        if(i!=mini){
        swap(arr[i], arr[mini]);
        c++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
        if(i!=n-1){
            cout<<" ";
        }
    }
    cout<<endl;
    cout<<c<<endl;

}
    int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    seclectionSort(arr,n);

    return 0;
}