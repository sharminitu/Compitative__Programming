#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;//1,2,4,8,16
    int b = 1;
    for (int i = 1; i <= a; i++)
    {
        cout << b << " ";
        b = b * 2;
    }
    return 0;
}