#include<iostream>
using namespace std;
char alpha(char ch)
{
    if(ch==('a'||'e'||'i'||'o'||'u'))
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    char n;
    int res;
    cin>>n;
    res=alpha(n);
    cout<<res;
    return 0;
}