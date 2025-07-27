#include<iostream>
using namespace std;
int positive(int a)
{
    if(a<0)
    {
        return 0;
    }
    else{
        return 1;
    }
}
int main()
{
    int n,res;
    cin>>n;
    res=positive(n);
    cout<<res;
    return 0;
}