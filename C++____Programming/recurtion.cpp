#include <iostream> //print 1 to N
using namespace std;
void greet(int x, int n)
{
    if (x> n)
        return;
    cout << x << endl;
    greet(x + 1,n);
}
int main()
{
    int n;
    cin>>n;

    greet(1,n);
}