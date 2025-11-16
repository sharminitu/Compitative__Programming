#include<bits/stdc++.h>
using namespace std;

bool isbalanced(char c1,char c2){
    return (c1=='('&&c2==')')||(c1=='{'&&c2=='}')||(c1=='['&&c2==']');
    
}
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;

        stack<string> st;
        bool done =1;

        for(auto u:s){

            if(u=='('||u=='{'||u=='['){
                st.push(&u);
            }
            else{
                if(st.empty()){
                    done =0;
                    break;
                }
                else{
                    if(isbalanced,st.top(),u){
                        st.pop();
                    }
                    else{
                        done =0;
                        break;
                    }
                }
            }
        }
        
        if(!st.empty()){
            done =0;
        }
        if(done)cout<<"Yes\n";
        else cout<<"NO\n";
    }
}