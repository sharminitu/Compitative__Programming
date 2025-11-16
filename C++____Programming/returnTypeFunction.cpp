#include <iostream>
using namespace std;
int sum(int a, int b)
{ // formal parameter
    return a + b;
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    cout<<sum(a, b); // actul parameter,,,,pass by value
}