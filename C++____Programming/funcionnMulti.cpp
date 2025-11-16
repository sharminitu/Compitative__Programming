#include <iostream>
using namespace std;

void greet()
{
    cout << "Good Morning" << endl;
    return; // sesh hoiye jai function
    cout << "How are you" << endl;
}
void india()
{
    cout << "You are in india" << endl;
    greet();
    return;
}

int main()
{
    // greet(); // function call
    cout<<"hay"<<endl;
    india();

    return 0;
}