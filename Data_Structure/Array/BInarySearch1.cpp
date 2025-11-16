#include <bits/stdc++.h>
using namespace std;

int RecursivebinarySearch(vector<int> arr, int tar,int st,int end)
{
    while (st <= end)
    {
        int mid = st + (end - st) / 2; // mid = (st+end)/2 same......use this for overflow
        if (tar > arr[mid])//2nd half
        {
           return RecursivebinarySearch(arr,tar,mid+1,end);
        }
        else if (tar < arr[mid])//1st half
        {
            return RecursivebinarySearch(arr,tar,st,mid-1);
        }
        else//mid = ans;
        {
            return mid;
        }
    }
    return -1;
}
int main()
{

    
    vector<int> arr1 = {1, 0, 3, 4, 5, 9, 12}; // odd

    int tar1 = 12;

    int st =0;
    int n= arr1.size();

    cout << RecursivebinarySearch(arr1, tar1,0,n-1) << endl;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12}; // even

    int tar2 = 0;

    cout << RecursivebinarySearch(arr2, tar2,0,n-1) << endl;
}

// Time complexity = n/2^k.......TC=O(k)  k= log2^n ,,,,Tc= O(logn)