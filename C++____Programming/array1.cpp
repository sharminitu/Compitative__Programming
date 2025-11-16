#include <iostream>
using namespace std;
int main()
{
    int arr[5]; // declearation
    for (int i = 0; i <= 4; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << " ";
    }

    arr[0] = 100;
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}