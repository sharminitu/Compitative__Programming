#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int digitsum =0;

        for(auto u:s){
            digitsum +=(u-'0');
        }
        string str = to_string(digitsum);

        string tmp = str;
        
        reverse(tmp.begin(),tmp.end());

        if(tmp == str){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"NO"<<endl;;
        }

    }

    
}