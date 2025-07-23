#include<stdio.h>
int main()
{
int n,i,j,temp;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
int s1,s2,k;
scanf("%d",k);
s1=a[k-1];
s2=a[n-k];
int product;
product=s1*s2;
printf("\n%d",product);
return 0;
}