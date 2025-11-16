#include <iostream>
using namespace std;
int main()
{
    string s = "Sharmin Sultana";
    cout << s << endl;
    cout << s << " " << s.length() << endl;
    //s=s+"ITU";

    s = "ITU"+s;
    cout << s << " " << s.length() << endl;
}
