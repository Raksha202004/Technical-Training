#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s,s1;
    int i,j,len=0;
    std::getline(std::cin,s);
    cout<<"Given string :"<<s<<endl;
    for(i=0;s[i]!='\0';i++)
    {
        len++;
    }
    cout<<"All the substring are:"<<endl;
    for(i=0;i<len;i++)
    {
        for(j=1;j<=len-i;j++)
        {
            s1=s.substr(i,j);
            cout<<s1<<endl;
        }
    }
    return 0;
}