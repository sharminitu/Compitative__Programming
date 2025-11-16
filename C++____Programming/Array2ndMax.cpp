#include <iostream>
using namespace std;
int main()
{
    int arr[5]; // declearation
    int max = INT8_MIN;
    int n = sizeof(arr) / 4;
    for (int i = 0; i <= 4; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i <= n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        // max = max(max,ara[i]);
    }
    int Smax = INT8_MIN;
     for (int i = 0; i <= n; i++)

    {
        if (arr[i] != max)
            Smax = arr[i];
        // max = max(max,ara[i]);
    }
    cout << Smax << " " << endl;
}