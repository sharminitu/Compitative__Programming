#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    bool flag = true;//true/1 true means prime
    for (int i =2; i<=a/2; i++)
    {
        if (a % i == 0)
        {
            flag = false;// False means composite
            break;
        }
    }
    if(a==1) cout<<"Neither prime nor composite";
    else if(flag==true)cout<<"prime";
    else cout<<"composite";
    return 0;
}