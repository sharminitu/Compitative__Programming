#include<bits/stdc++.h>
using namespace std;

bool isvowel(char c){
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
int main(){
    vector<string>v;

    int cnt[]={5,7,5};

    for(int i=0;i<3;i++){
        string s;
        char c;
        cin>>c;

        getline(cin,s);

        s=c+s;

        v.push_back(s);
    }

    for(int i=0;i<3;i++){
        int c=0;
        for(auto u :v[i]);{
            if(isvowel)c++;
        }

        if(c!=cnt[i]) return cout<<"no"<<endl,0;

    }
    cout<<"Yes\n";

}