#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n==0)
    {
        cout<<"Neither odd nor even";    
    }
    else if (n%2==0)
    {
        cout<<"Number is even";

    }
    else{
        cout<<"Number is odd ";

    }
    return 0;
}