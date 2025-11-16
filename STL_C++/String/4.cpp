#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    string s1 = "Sharmin", s2 = "Sultana";

    if(s1==s2){
        cout<<"equal";
    }
    else{
        cout<<"Not equal";
    }
    cout<<endl;

    reverse(s1.begin(),s1.end());

    cout<<s1<<endl;
}