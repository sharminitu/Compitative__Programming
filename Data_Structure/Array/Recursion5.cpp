#include <bits/stdc++.h>
using namespace std;
void AllSubset(vector<int> &nums, vector<int> &ans, int i)
{

    if (i == nums.size())
    {
        for (auto val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    ans.push_back(nums[i]);
    AllSubset(nums, ans, i + 1); // include

    ans.pop_back();
    AllSubset(nums, ans, i + 1); // exclude
}

vector<vector<int>>subsets(vector<int>nums){

    vector<vector<int>>allsubsets;

    vector<int>ans;

    AllSubset(nums,ans,0,allsubsets);
}

int main()
{
    vector<int> arr = {1, 2, 3};

    vector<int> ans; // store subset;

    printSubset(arr, ans, 0);
}