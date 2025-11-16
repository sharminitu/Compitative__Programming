#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Number of rows and col :";
    cin >> m;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << (char)(j+96)<< " ";///a,b,c-asci-96_____A,B,C,D--64
        }
        cout << endl;
    }
}