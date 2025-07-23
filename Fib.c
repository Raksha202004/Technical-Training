#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=1;
    int n,i;
    int res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i==0)
        res=a;
        if(i==1)
            res=b;
        else
            res= a+b;
             a=b;
             b=res;
      printf("%d",res);
    }
    return 0;
}