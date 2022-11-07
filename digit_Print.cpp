#include<iostream>
using namespace std;

void digitPrint(int n , string arr[])
{
    
    // Base Case 
    if (n==0)
      return ;

    // processing 
    int digit = n % 10;
    n = n / 10;

    // R.R
    digitPrint(n,arr);
    
    // print 
    cout<<arr[digit]<<" ";
    

}

int main()
{
    string arr[10] = {"zero" , "one" , "two" , "three" , 
                   "four" , "five" , "six" , "seven" , "eight" , "nine" };
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;

    digitPrint(n , arr);                    
}