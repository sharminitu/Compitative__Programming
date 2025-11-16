#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>A;
    sort(A.begin(),A.end());

    int d = A[1]-A[0];

    for(int i=2;i<A.size();i++){
        if(A[i]-A[i-1]!=d){
            return false;
        }
        return true;
    }



}