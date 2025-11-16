#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>A={4,7,6,4,5};

    int i = max_element(A.begin(),A.end())-A.begin();

    cout<<i<<endl;
    

}