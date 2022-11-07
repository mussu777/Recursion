#include<iostream>
using namespace std;

void fibo(int n){
    int next;
    int first = 0;
    int second = 1;
    for(int i = 0; i<(n-1);i++){
        next = first + second;
        
        first = second;
        second = next;
    }
    cout<<next<<endl;
}

int main()
{   int n;
    cout<<"ENter the number ";
    cin>>n;
    fibo(n);
    return 0;
}