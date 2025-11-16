#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Number of rows and col :";
    cin >> m;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i;j++)//2*i-1,,,j=j+2
        {
            cout << 2*j-1 << " ";//2*j-1
        }
        cout << endl;
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= 2*i-1; j = j+2) // 2*i-1,,,j=j+2
        {
            cout << j<< " "; // 2*j-1
        }
        cout << endl;
    }
    for (int i = 1; i <= m; i++)
    {
        int a=1;
        for (int j = 1; j <= i;j++) // 2*i-1,,,j=j+2
        {
            cout << a<< " "; // 2*j-1
            a+=2;
        }
        cout << endl;
    }
}
