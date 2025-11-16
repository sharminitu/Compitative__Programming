#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int c=0;
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    c = count(isPrime.begin(),isPrime.end(),true);
    cout<<c<<endl;
}