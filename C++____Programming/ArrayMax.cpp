#include <iostream>
using namespace std;
int main()
{
    int arr[5]; // declearation
    int max= INT8_MIN;
    int n=sizeof(arr)/4;
    int min =0;
    for (int i = 0; i <= 4; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i <= n; i++)
    {
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];

        //max = max(max,ara[i]);
    }
    cout << max << " "<<endl;
    cout << min << " ";
}