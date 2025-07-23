#include<stdio.h>
int main()
{
    int s,e;
    scanf("%d%d",&s,&e);
    while(s<=e)
    {
        printf("%d\t",e);
        e--;
    }
    return 0;
}