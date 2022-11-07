#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>& nums, vector<vector<int>> &ans, int index)
{
    // Base Case
    if (index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (int j = index; j < nums.size(); j++)
    {
        swap(nums[index], nums[j]);
        solve(nums, ans, index);                               ////          no output is coming 
    }
}

vector<vector<int>> permute(vector<int> &nums)
{

    vector<vector<int>> ans;
    int index = 0;
    solve(nums, ans, index);

    return ans;
}

int main()
{
    vector<int> nums;

    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);

    

   vector<vector<int>> answer = permute(nums);

    for(int i=0; i<answer.size(); i++)
    {
        for(int j=0; j<answer[i].size(); j++)
        {
            cout<<answer[i][j];
        }
    }
}