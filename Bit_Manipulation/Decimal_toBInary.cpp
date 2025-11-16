#include<bits/stdc++.h>
using namespace  std;
int main(){

    vector<int> binary;
    int n;
    
    cin >> n;

    while(n>0){
        binary.push_back(n%2);
        n/=2;
        
    }

    cout<<"Binary :";

    for(int i=binary.size()-1;i>=0;i--){
        cout<<binary[i];
    }
    cout<<endl;

    return 0;

}