#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;

    s.insert(2);
    s.insert(2);
    s.insert(4);
    s.insert(1);
    s.insert(6);
    s.insert(3);
    s.insert(5);


    cout << s.count(2) << endl;
    cout<<s.count(5)<<endl;
   
    cout<<*s.begin()<<endl;//first element

    cout<<*(--s.end())<<endl;//last element

    cout<<*(s.rbegin())<<endl;//reverse

    s.erase(2);

    s.erase(s.begin());
    s.erase(--s.end());
    
    cout<<s.size()<<endl;


    for(auto u:s){
        cout<<u<<" ";
    }
    cout<<endl;

   

}