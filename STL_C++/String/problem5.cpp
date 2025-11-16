#include <bits/stdc++.h>
using namespace std;

bool isvowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
int main()
{
    // string s = "dcba";

    // bool f1 = next_permutation(s.begin(),s.end());

    // cout<<f1<<" "<<s<<endl;

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        if(next_permutation(s.begin(),s.end())){
            cout<<s<<endl;
        }
        else cout<<"NO Ans";
    }

}