#include <stdio.h>
#include<math.h>

int main()
{int n,i,j,flag=0;
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
       for(int j=0;j<n;j++)
       {
           if(a[i][j]!=a[j][i])
           flag=1;
       }
   }
   if(flag==0)
   printf("sym");
   else
   printf("not");
    return 0;
}