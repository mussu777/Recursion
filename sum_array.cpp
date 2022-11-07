#include<iostream>
using namespace std;

int isSum(int arr[] , int size)
{
    // Base Case
    if (size == 0)
    {
        return false;
    }
    // processing 
    if (size == 1)
    {
        return arr[0];
    }

    // R.R
    int remainingPart = isSum(arr+1 , size-1);
    int sum = arr[0] + remainingPart;
    return sum;
}

int main() {

    int arr[5] = {2,4,9,9,9};
    int size = 5;

    int sum = isSum(arr, size);

    cout << "Sum is " << sum << endl;

    return 0;
}