#include<iostream>
using namespace std;


bool isPalin(string &str , int i , int j)
{
    // base case
    if (i>j)
    return true;

    //processing
    if ( str[i] != str[j])
    return false;
    
    // R.R
    else
    {
    return isPalin(str , i+1 , j-1);
    }

}

int main()
{
    string s = "mussu";

    bool answer = isPalin(s, 0 , s.size()-1);

    if (answer)
    {
        cout<<"The string is palindrome ";
    }
    else
    {
        cout<<"The string is not palindrome ";
    }

}