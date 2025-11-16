#include<bits/stdc++.h>
using namespace std;
void recurpermute(int indx , string &s,vector<string>&ans){
    if(indx == s.size()){
    ans.push_back(s);
    return;}

    for(int  i =indx ;i<s.size();i++){
        swap(s[indx],s[i]);

        recurpermute(indx+1,s,ans);
        swap(s[indx],s[i]);
    }
}
vector<string>findPermutation(string &s){
    vector<string>ans;

    recurpermute(0,s,ans);

    sort(ans.begin(),ans.end());

    return ans;

}
int main(){
    string s;
    cin>>s;

    vector<string>res = findPermutation(s);

    for(auto x :res){
        cout<<x<<endl;
    }
}