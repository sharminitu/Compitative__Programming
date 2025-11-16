#include <bits/stdc++.h>
using namespace std;
const int n = 1e7+10;
int main()
{


    vector<bool> isPrime(n + 1, true);
    vector<int>lp(n,0),hp(n,0);
    isPrime[0] = isPrime[1] = false;

        for (int i = 2;  i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                isPrime[j] = false;
                hp[j] =i;
                if(lp[j] == 0){
                    lp[j] = i; 
                }
            }
        }
    }

    for (int i = 2; i <6; i++)
    {
        cout<<lp[i]<<" "<<hp[i]<<endl;
    }
}