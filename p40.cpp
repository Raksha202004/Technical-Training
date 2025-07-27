#include<iostream>
using namespace std;
void numbers(int s,int e)
{
    while(s<=e)
    {
        cout<<s;
        s++;
    }
}
int main()
{
    int f,l;
    cin>>f>>l;
    numbers(f,l);
    return 0;
}