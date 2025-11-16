#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;


    cout<<(int)str[str.size()-1]<<endl;

    int last_Disit = str[str.size()-1]-'0';

    cout<<last_Disit;
}