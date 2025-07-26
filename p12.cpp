#include<iostream>
using namespace std;
int square(int r)
{
 return r*r;
}
int main()
{
    int x,y;
    cin>>x;
    y=square(x);
    cout<<y;
    return 0;
}