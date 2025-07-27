#include<iostream>
using namespace std;
int student(int marks)
{
    if(marks>35)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n,res;
    cin>>n;
    res=student(n);
    cout<<res;
    return 0;
}