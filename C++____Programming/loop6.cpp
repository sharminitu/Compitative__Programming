#include <iostream>
using namespace std;
int main()
{
    int a, s = 0,rem,n;
    cin >> a;
    while (a != 0)
    {
        rem = a %10;
        n=rem/10;
        s+=rem;
    }
    cout << s << endl;
}