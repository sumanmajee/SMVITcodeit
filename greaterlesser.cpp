#include<iostream>
using namespace std;
int main()
{
    int a,b,c,result;
    cout<<"enter three numbers:\n";
    cin>>a>>b>>c;
    result=(a+b)*c;
    if(result>100)
    {
        cout<<"Greater then 100";
    }
    else
    {
        cout<<"Less than 100";
    }
    return 0;
}