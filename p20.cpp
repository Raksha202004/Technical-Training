#include<iostream>
#include<math.h>
using namespace std;
void eqn(float a,float b,float c)
{
    float d = (b*b)-(4*a*c);
    if(d==0)
    {
        cout<<"not possible";
    }
    else
    {
        float x1,x2;
        x1=((-b)+sqrt(d))/(2*a);
        x2=((-b)-sqrt(d))/(2*a);
        cout<<x1<<x2;
    }
}
int main()
{
    float x,y,z;
    cin>>x>>y>>z;
    eqn(x,y,z);
    return 0;
}