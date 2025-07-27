#include<iostream>
using namespace std;
int countmiss(char *s,int len)
{
    int miss=0,i;
    for(i=0;i<len;i++)
    {
        if(isalnum(s[i])||isspace(s[i]))
        {
            continue;
        }
        else
        {
            miss++;
        }
    }
    return miss;
}
int main()
{
    char s[100];
    int c;
    cin>>s;
    c=countmiss(s);
    cout<<c;
    return 0;
}