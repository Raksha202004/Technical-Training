#include<iostream>
using namespace std;
int rect(int a,int b)
{
    return a*b;
}
int main()
{
    int x,y,z;
    cin>>x>>y;
    z=rect(x,y);
    cout<<z;
    return 0;
}