/*
Given array a of N integers. given Q queries and in each query given L and R 
print sum of array elements from index L to R (L,E includeed )

constrains 
1<=N<=10^5
1<=a[i]<=10^5;
1<=L,R<=N;
*/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int a[N];
int pf[N];
int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pf[i]=pf[i-1]+a[i];
       
    }

    int q;

    cin >> q;

    while (q--)
    {
        int l,r;
        cin >> l>>r;

        
        cout << pf[r] -pf[l-1]<< endl;
    }

    // 0(n)+o(q*n)=o(n^2)=10^10
    // 0(n)+o(q)=o(n)=10^5
}


#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int a[N];
int pf[N];
int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    
    }

    int q;

    cin >> q;

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        long long sum =0;

        for(int i=l;i<=r;i++){
           sum+=a[i];
        }
        cout <<sum << endl;
    }
}

    // 0(n)+o(q*n)=o(n^2)=10^10
   