#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  a,r,c;
    cin>>a;

    long long maxsum =0;

    for(int i=1;i<=a;i++){
        if(a%i==0){
            r =i;
            c= a/i; 
    }
    maxsum = max(maxsum, r + c);
   
    }
    cout << maxsum << endl;

    return 0;
}