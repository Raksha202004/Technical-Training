#include<iostream>
#include<math.h>
using namespace std;
int exp(int x,int y)
{
    return (log10(exp(x))+log(sqrt(y)))/(sin(x)+exp(x)+pow(x,y));
}
int main()
{
    int a,b,c;
    cin>>a>>b;
    c=exp(a,b);
    cout<<c;
    return 0;
}