#include<iostream>
using namespace std;


void print(string str , int j)
{
    for(int i=0; i<j; i++)
    {
        cout<<str[i]<<" ";
    }
}
void reverseString(string &str , int i , int j)
{
    // base case
    if (i>j)
    return;
    
    // processing 
    swap(str[i] , str[j]);
    i++;
    j--;
    
    // R.R
    reverseString(str , i , j);
   
}

int main()
{
    string s = "MUSSU";

    reverseString(s , 0 , s.size()-1);
    print(s , s.size());
}