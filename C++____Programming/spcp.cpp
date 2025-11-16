#include<iostream>
using namespace std;
int main()
{
    int cp;
    cout<<"Enter Cost prise :";
    cin>>cp;
    int sp;
    cout << "Enter selling prise :";
    cin >> sp;

    if(sp>cp){
        cout<<"profit is "<<sp-cp;
    }
    else if(cp>sp){
        cout<<"loss is "<<cp-sp;
    }
    else{
        cout<<"No profit No loss";
    }

    return 0;
}
