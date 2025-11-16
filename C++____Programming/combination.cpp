#include <iostream>
using namespace std;
int main()
{
    int n, r;
    cin >> n;
    cin >> r;

    int a=1;
    for(int i =1;i<=n;i++){
        a *=i;
    }
    int b = 1;
    for (int i = 1; i <= r; i++)
    {
        b *= i;
    }
    int c = 1;
    for (int i = 1; i <= n-4; i++)
    {
        c *= i;
    }

    cout<<a/(b*c);
  
}