#include <iostream>
using namespace std;
void change(int ara[]){
    ara[0]=9;
}
int main()
{
    int arr[5]; // declearation
    for (int i = 0; i <= 4; i++)
    {
        cin >> arr[i];
    }
    change(arr);
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << " ";
    }
}