#include<bits/stdc++.h>
using namespace std;
int main(){


    int n = 5;
    int a[5]={5,7,4,2,3};

    for(int mask =0;mask<(1<<n);mask++){
        for(int i=0;i<n;i++){
            if(mask&(1<<i)){
                cout<<a[i]<<" ";
            }
        }
        cout << endl;
    }
 
}