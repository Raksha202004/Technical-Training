#include<stdio.h>
int main()
{
    struct A
    {
        int m1,m2,m3;
        float s;
        char z[100];
    }a;
    printf("Enter the name of the student:");
    scanf("%[^\n]a",&a.z);
    printf("\nEnter the mark of sub1:");
    scanf("%d",&a.m1);
    printf("\nEnter the mark of sub2:");
    scanf("%d",&a.m2);
    printf("\nEnter the mark of sub3:");
    scanf("%d",&a.m3);
    a.s=(a.m1+a.m2+a.m3)/3;
    printf("\nThe average marks is=%f",a.s);
    return 0;
}