#include<iostream>
using namespace std;
int tri(int b,int h)
{
    return 0.5*b*h;
}
int main()
{
    int x,y,z;
    cin>>x>>y;
    z=tri(x,y);
    cout<<z;
    return 0;
}