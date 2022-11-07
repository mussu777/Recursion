#include<iostream>
using namespace std;

void bubble(int *arr , int n)
{
    // base case
    if (n==0 || n==1)
    {
      return ;
    }

    // processing 
    for(int i=0 ; i<n-1; i++)
    {
        if (arr[i] > arr[i+1])
        {
            swap(arr[i] , arr[i+1]);
        }

    }

    // R.R
    bubble(arr,n-1);
}

int main()
{
    int arr[6] = {5,3,2,6,1,9};

    bubble(arr , 6);

    cout<<"Your Bubble sorted array is ";
    for(int i=0; i<6; i++)
    {
        cout<<arr[i]<<" ";
    }
}