#include<iostream>
using namespace std;
void swap1(int a,int b)
{
   a=a+b;
   b=a-b;
   a=a-b;
   cout<<a<<b<<endl;
}
int main()
{
    int x,y;
    cin>>x>>y;
    swap1(x,y);
    return 0;
}