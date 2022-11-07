#include<iostream>
using namespace std;

void Print(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


bool isSorted(int arr[],int size)
{   Print(arr,size);
    //base case
    if ((size == 0) || (size == 1))
    {
        return true;
    }

    // processing 
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    // R.R
    {
        bool remainingPart = isSorted(arr+1 , size-1);
        return remainingPart;
    }
}

int main() {

    int arr[5] = {2,4,9,9,9};
    int size = 5;

    bool ans = isSorted(arr, size);

    if(ans){
        cout << "Array is sorted " << endl;
    }
    else {
        cout << "Array is not sorted " << endl;
    }

    return 0;
}