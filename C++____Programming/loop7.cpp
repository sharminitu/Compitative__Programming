#include<iostream>
using namespace std;
int main()
{
    int a,r=0;
    cin >> a;
    int rev = 0;
    while (a != 0)
    {
        int ld = a%10;
        r==r*10;
        r+=ld;
        a /= 10;
    }
    cout << r<< endl;
}