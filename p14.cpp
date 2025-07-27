#include<iostream>
using namespace std;
int circ(int r)
{
    return 3.14*r*r;
}
int main()
{
    int x,y;
    cin>>x;
    y=circ(x);
    cout<<y;
    return 0;
}