#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, a;
   cin >> n;

   vector<int> v;

   for (int i = 0; i < n; i++)
   {
      int a;
      cin >> a;
      v.push_back(a);
   }

   int pos;
   cin >> pos;
   v.erase(v.begin() + pos - 1);

   int b, c;
   cin >> b >> c;

   v.erase(v.begin() + b - 1, v.begin() + c - 1);

   cout
       << v.size() << endl;

   for (auto u : v)
   {
      cout << u << " ";
   }
   cout << endl;

   return 0;
}