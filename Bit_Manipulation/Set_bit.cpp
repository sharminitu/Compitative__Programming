#include <bits/stdc++.h>
using namespace std;
int main()
{

int x = 12;         // 1100
int rsb = x & (-x); // 0100

cout<<rsb<<endl;

int count = 0;
while (x)
{
    x &= (x - 1); // remove rightmost set bit
    count++;
}

cout<<count<<endl;
}
