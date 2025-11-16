#include<bits/stdc++.h>
using namespace std;
int main(){

    string s ="SharminSultana";
 
    s.erase(s.begin()+2,s.begin()+7);

    cout<<s<<endl;

    string s2 = "shhhhhaaa";

    s2.erase(remove(s2.begin(),s2.end(),'a'),s2.end());

    cout<<s2<<endl;

    string s1 ="gadha alo gahdaha";

    copy(s1.begin()+5,s1.begin()+9,back_inserter(s));

    cout<<s<<endl;
}
