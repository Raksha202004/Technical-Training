#include<iostream>
using namespace std;
int great(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    int x,y,res;
    cin>>x>>y;
    res=great(x,y);
    cout<<res;
    return 0;
}