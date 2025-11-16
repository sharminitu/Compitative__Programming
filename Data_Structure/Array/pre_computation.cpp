/*Given T test cases abd in each test cases a number  N.print its factorial
for each tast cases % M
1<=N<=100

where M = 10^9+7

constraints
1<=T<=10^5;
1<=N<=10^5;
A%M
*/
#include <bits/stdc++.h>
using namespace std;

const int M= 1e9+7;
const int N= 1e5+10;

long long fact [N];
int main()
{

    fact[0]=fact[1]=1;

    for(int i=0;i<N;++i){
        fact[i]=fact[i-1]*i;
    }
    int t;
    cin>>t;
    while(t--){

    
    int n;
    cin >> n;

    // long long fact = 1;
    // int M = 47;

    // for (int i = 2; i <= n; i++)
    // {
    //     fact = (fact * i) % M;
    // }
    cout << fact[n] << endl;

}
}

//o(T)=10^10 old
//o(N)+o(T)=10^5+10^5