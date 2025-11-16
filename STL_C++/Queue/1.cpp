#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;

    q.push(1); //fifo =first input first out
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    cout<<q.size();

    cout<<q.front()<<endl;
    q.pop();

    cout<<q.front()<<endl;

    cout<<endl;

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }


}
