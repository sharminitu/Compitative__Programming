#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        char c;
        cin>>c;

        getline(cin,s);

        s=c+s;

        string tmp;
        vector<string>v;
        for(auto u:s){
            if(isspace(u)){
                v.push_back(tmp);
                tmp.clear();
            }
            else{
                tmp+=u;
            }


        }
        v.push_back(tmp);

        map<string,int>cnt;

        int mxfrq =0;
        for(auto u: v){
            cnt[u]++;
            mxfrq=max(mxfrq,cnt[u]);
        }

        string ans;

        for(auto u:v){
            if(cnt[u]==mxfrq){
                ans =u;
                break;
            }

        }
        cout<<ans<<" "<<mxfrq<<endl;
    }
}