#include <bits/stdc++.h>
using namespace std;
void countswap(int arr[], int n)
{
    int c = 0;

    for (int i = 0; i < n - 1; i++)
    {
      
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                
                cout<<arr[i]<<" ";
            }
        
    }
}
int main()
{
    int n, c = 0;
    cin >> n;
    int arr[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    countswap(arr, n);
    return 0;
}