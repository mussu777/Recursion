#include<iostream>
using namespace std;

int stairCase(int n)
{
    // base case
    if (n<0)
    return 0;
    if (n==0)
    return 1;

    // R.R
    int ans = stairCase(n-1) + stairCase(n-2);
    return ans;
    
}

int main()
{
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;

    int solution = stairCase(n);
    cout<<"The solution is "<<solution;
}