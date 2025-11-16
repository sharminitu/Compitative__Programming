#include <iostream>
using namespace std;
void swap(int& x,int& y){
    int temp = x;
     x = y;
     y = temp;
}
int main()
{
    int x = 2;
    int y = 5;
    cout << x << " " << y << endl;
    // int temp = x;
    // x = y;
    // y = temp;

    // x = x + y;
    // y = x - y;
    // x = x - y;
    swap(x,y);
    cout << x << " " << y << endl;
}