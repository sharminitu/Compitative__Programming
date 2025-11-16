#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int b=6;
    for (int i = 1; i <=a; i++)
    {
        cout << b<<" "<<endl;
        b=b+3;
    }
    return 0;
}