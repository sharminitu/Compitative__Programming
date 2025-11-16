#include <iostream> //print 1 to N without extra parameter
using namespace std;
void greet( int n)
{
    if (n==0)
        return;// base case
    greet(n-1);//call
    cout << n << endl; // work
}
int main()
{
    int n;
    cin >> n;
    greet(n);
}