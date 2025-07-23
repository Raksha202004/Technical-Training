#include<stdio.h>
int main()
{
    int a,b,n;
    float c;
    printf("Choose any one of the following:");
    printf("\n1.Add\n2.Sub\n3,Mul\n4.Div");
    printf("Enter your option:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("Enter two nums:");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("\nAdd=%f",c);
        break;
        case 2:
        printf("Enter two nums:");
        scanf("%d%d",&a,&b);
        c=a-b;
        printf("\nSub=%f",c);
        break;
        case 3:
        printf("Enter two nums:");
        scanf("%d%d",&a,&b);
        c=a*b;
        printf("\nMul=%f",c);
        break;
        case 4:
        scanf("%d%d",&a,&b);
        c=a/b;
        printf("\nDiv=%f",c);
        break;
        default:
        printf("\nInvalid option");
        break;

    }
    return 0;
}