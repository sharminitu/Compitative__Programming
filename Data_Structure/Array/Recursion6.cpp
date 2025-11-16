#include <bits/stdc++.h>
using namespace std;
void printSubset(vector<int> &arr, vector<int> &ans, int i,vector<vector<int>>allsubsets)

{

    if (i == arr.size())
    {
        allsubsets.push_back(ans);

        
        return;
    }

    ans.push_back(arr[i]);
    printSubset(arr, ans, i + 1,allsubsets); // include

    ans.pop_back();

    int indx = i+1;

    while(indx<arr.size() && arr[indx]==arr[indx-1]){
        indx++;
    }
    printSubset(arr, ans, indx,allsubsets); // exclude

}
int main()
{
    vector<int> arr = {1, 2, 2};

    vector<vector<int>>allsubset;

    vector<int> ans; // store subset;

    sort(arr.begin(),arr.end());

    printSubset(arr, ans, 0,allsubset);

}