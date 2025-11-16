#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

    vector<int> prefixXOR(n);
    prefixXOR[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixXOR[i] = prefixXOR[i - 1] ^ arr[i];
    }

    // Subarray XOR from index 1 to 3 (2,1,5)
    int L = 1, R = n;
    int result;
    if (L == 0)
        result = prefixXOR[R];
    else
        result = prefixXOR[R] ^ prefixXOR[L - 1];

    cout << "Subarray XOR from " << L << " to " << R << " is: " << result << endl;
}
}
