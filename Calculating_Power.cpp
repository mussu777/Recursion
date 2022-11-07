#include<iostream>
#include<math.h>
using namespace std;


int checkPower(int a , int b)
{
    // base case
    if(b==0)
    return 1;

    if(b==1)
    return a;
    //R.R
    int ans = checkPower(a , b/2);
    
    // if b is even
    if(b%2==0)
    {
      return ans * ans;
    }
    else
    {
        // for odd
        return a * ans * ans;
    }

}

int main()
{
   int a , b;
   cout<<"enter the desired number in a and b ";
   cin>>a>>b;

   int answe = checkPower(a,b);
   cout<<a<<" to the power "<<b<<" is "<<answe;
   return 0;
}