#include <bits/stdc++.h>
using namespace std;
void countswap(int arr[],int n){
    int c=0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                c++;
            }
        }
    }

    cout << "Array is sorted in " << c << " swaps." << endl;

    cout << "First Element: " << arr[0] << endl;
    cout << "Last Element: " << arr[n - 1] << endl;

}
int main()
{
    int n,c=0;
    cin >> n;
    int arr[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    countswap(arr,n);

    return 0;

}