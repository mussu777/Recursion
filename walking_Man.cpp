#include<iostream>
using namespace std;

void walkingMan(int src , int dest)
{
     cout<<"source "<< src <<" destination "<<dest<<endl;
    // base case
    if (src == dest)
    {
        cout<<"reached destination"<< endl;
        return ;
    }

    // processing 
    src++;

    // Recursive Relation
    walkingMan(src , dest);


}

int main ()
{
    int src = 1;
    int dest = 10;

    walkingMan(src , dest);

}