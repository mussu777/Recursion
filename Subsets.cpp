#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    // Base Case
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // exclude
    solve(nums, output, index + 1, ans);

    // Include
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> output;                                                // 90% solve  but answer is not in customized  form 
    int index = 0;
    solve(nums, output, index, ans);

    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> answer = subsets(nums);
    int row = answer.size();      
    for (int i = 0; i < row; i++)                                                          // lec 37
    {
        for (int j = 0; j < answer[i].size(); j++)
            cout << answer[i][j] << " ";
    }
    return 0;
}