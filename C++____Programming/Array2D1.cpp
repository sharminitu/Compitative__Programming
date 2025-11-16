#include <iostream>
using namespace std;
int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int j = 0; j < 3; j++)//col
    {
        for (int i = 0; i < 3; i++)//row
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}