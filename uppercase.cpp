#include<iostream>
#include<cctype>
#include<cstdlib>
using namespace std;
int main()
{
    char str[100];
    gets(str);
    int i;
    for(i=0;str[i]='\0';i++)
    { 
        if(i==0)
        {
             str[0]=(toupper(str[0]));
            
        }
        if(isspace(str[i]))
        {
             str[i+1]=(toupper(str[i+1]));
             break;
        }
    
       
    }
    
   cout<<str<<endl;
   return 0;
}