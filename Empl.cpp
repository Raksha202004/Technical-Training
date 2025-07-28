#include<iostream>
#include<cstring>
using namespace std;

class Employee
{
    public:
    int id,salary,exp;
    char name[100],dept[100],desig[100];
    void input()
    {
        cout<<"Enter the name";
        gets(name);
        cout<<"Enter the employee id";
        cin>>id;
        cout<<"Enter the employee salary";
        cin>>salary;
        cout<<"Enter the employee experience";
        cin>>exp;
        cout<<"Enter the employee department";
        gets(dept);
        cout<<"Enter the employee designation";
        gets(desig);
    }
    void display()
    {
        cout<<name<<endl;
        cout<<id<<endl;
        cout<<salary<<endl;
        cout<<exp<<endl;
        cout<<dept<<endl;
        cout<<desig<<endl;
    }
};
int main()
{
    Employee E;
    E.input();
    E.display();
    return 0;
}
