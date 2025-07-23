#include<stdio.h>
int main()
{
    int s,e;
    scanf("%d%d",&s,&e);
    while(s<=e)
    {
        printf("%d\t",s);
        s++;
    }
    return 0;
}