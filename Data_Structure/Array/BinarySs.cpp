#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    

    vector<int>arr;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }

    sort(arr.begin(),arr.end());

    int target;

    cin>>target;

    int st =0,end = arr.size()-1;
    int mid;
    int found = 0;
    while(st<=end){
         mid = st+(end-st)/2;

        if(target<arr[mid]){
            end = mid-1;//1st half 
        }
        else if(target>arr[mid]){
            st =mid+1;
        }
        else{
            found=1;
            break;
        }
    }

    if(found){
        cout<<target<<" "<<mid<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }

    return 0;

}
