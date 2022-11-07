#include <iostream>
#include <vector>
#include<string>
using namespace std;

void solve(string digit, string output, int index, vector<string> &ans, string mapping[])
{
    // base case
    if (index >= digit.length())
    {
        ans.push_back(output);
        return ;
    }

    int number = digit[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digit, output, index + 1, ans, mapping);
        output.pop_back();
    }
}                                                                            // No output is coming ...........

vector<string> letterCombination(string digits)
{
    vector<string> ans;
    if (digits.length() == 0)
        return ans;

    string output;
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    solve(digits, output, index, ans, mapping);
    return ans;
    
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
}

int main()
{
    string number  ;
    cout << "Enter the number ";
    getline(cin , number);

     letterCombination(number);

    // for(int i=0; i<Sol.size(); i++)
    // {
    //     cout<<Sol[i]<<" ";
    // }

}
