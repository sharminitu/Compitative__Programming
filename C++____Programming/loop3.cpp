#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a; // 1,2,4,8,16
    int b = 1;//store factore
    for (int i = a/2; i >= 1; i--)
    {
        if(a%i==0){
        b=i;
        break;
        }
    }
    cout << b;
    return 0;
}