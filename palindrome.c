#include<stdio.h>
int main()
{
    int n,sum=0,r,x;
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(sum==x)
    {
        printf("the number is palindrome");
    }
    else
    {
        printf("the number is not palindrome");
    }
    return 0;
}