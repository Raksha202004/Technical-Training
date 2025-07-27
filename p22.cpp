#include<iostream>
using namespace std;
int iseven(int a)
{
    if(a%2==a)
    return 1;
    else
    return 0;
}
int main()
{
    int n,x;
    cin>>n;
    x=iseven(n);
    cout<<x;
    return 0;
}