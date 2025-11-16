#include<bits/stdc++.h>
using namespace std;
int main(){


    priority_queue<pair<int,int>>q;//choto thke boro

    q.push({1,-2});
    q.push({2,-3});
    q.push({2,-4});
    q.push({2,-4});
    q.push({2,-4});

    

    while(!q.empty()){
        cout<<q.top().first<<" "<<q.top().second<<endl;
        q.pop();
    }
}