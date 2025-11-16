#include <iostream>
using namespace std;
int main()
{
    int arr[5],sum=0;// declearation
    for (int i = 0; i <= 4; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;

    for (int i = 0; i <= 4; i++)
    {
        sum+=arr[i];
        cout << sum << " ";
    }
}