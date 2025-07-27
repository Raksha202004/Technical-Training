#include<iostream>
using namespace std;
void num(int n)
{
    while(n>0&&n<10)
    {
        cout<<n;
        n=n+1;
    }
}
int main()
{
    int a;
    num(a);
    return 0;
}