#include<stdio.h>
#include<math.h>
int main()
{
    int s,l,b,ba,h,r,n;
    float a;
    printf("Choose any one of the following:");
    printf("\n1.Square\n2.Rectangle\n3.Triangle\n4.Circle");
    printf("\nEnter your option:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("Enter the side:");
        scanf("%d",&s);
        a=s*s;
        printf("\nSquare=%f",a);
        break;
        case 2:
        printf("Enter the length and breadth:");
        scanf("%d%d",&l,&b);
        a=l*b;
        printf("\nRectangle=%f",a);
        break;
        case 3:
        printf("Enter the base and height:");
        scanf("%d%d",&ba,&h);
        a=(b*h)/2;
        printf("\nTriangle=%f",a);
        break;
        case 4:
        printf("Enter the radius:");
        scanf("%d",&r);
        a=3.14*r*r;
        printf("\nCircle=%f",a);
        break;
        default:
        printf("\nInvalid option");
        break;
    }
    return 0;
}