#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,i,j,k,l=INT_MIN,s=INT_MAX,count,c,flag=0,isnotprime=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(k=2;k<sqrt(a[i]);k++)
        {
            if(a[i]%k==0)
            count++;
        }
        if(count==0)
        {
            flag=1;
            if(l<a[i])
            {
                l=a[i];
            }
            if(s>a[i])
            {
                s=a[i];
            }
        }
    }
    if(flag==0 || l==s)
    printf("\nPrime Array");
    while(s<=1)
    {
        count=0;
        for(j=2;j<=sqrt(s);j++)
        {
            if(s%j==0)
            count++;
        }
        if(count==0)
        {
            c=0;
            for(i=0;i<n;i++)
            {
                if(s==a[i])
                c++;
            }
            if(c==0)
            {
                isnotprime=1;
                break;
            }
        }
        s++;
    }
    if(isnotprime==0)
    printf("\nPrime Array");
    else
    printf("\nNot a Prime Array");
    return 0;
}