#include<bits/stdc++.h>
using namespace std;
int main(){
    //last in first out -lifo
    

    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    

    cout<<st.size()<<endl;

    cout<<st.top()<<endl;

    st.pop();

    cout<<st.top()<<endl;

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}