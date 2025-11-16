#include<bits/stdc++.h>
using namespace std;
int main(){
    bool f =0;
    int arr[8];
    for(int i=0;i<8;i++){
        cin>>arr[i];
    }

    int target;
    cin>>target;

    for(int i=0;i<8;i++){
        if(arr[i]==target){
            f=1;
        }
    }

    if(f==1){
        cout<<"Found ";
    }
    else{
        cout<<"Not Found";
    }
}
