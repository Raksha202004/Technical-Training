#include<stdio.h>
int main()
{
    int sum=0,n,i,j;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i][i]+a[i][n-i-1];
        
    }
     printf("%d\t",sum);
    return 0;
}