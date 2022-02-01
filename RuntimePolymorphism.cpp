#include <iostream>
#include <string>
using namespace std;
class person
{
    string s1;
    public:
    void input()
    {
        cout<<"Enter the name :"<<endl;
        cin>>s1;
    }
    virtual void display()
    {
        cout<<"Name is "<<s1<<endl;
    }
};
class student: public person
{
    string course;
    int marks;
    int year;
    public:
    void input1()
    {
        cout<<"Enter the course,marks and year :"<<end;
        cin>>course>>marks>>year;
    }
    virtual void display()
    {
        person::display();
        cout<<"Course="<<course<<" Marks="<<marks<<" year="<<year<<endl;
    }
};
class employee:public person
{
    string department;
    int salary;
public:
    void input2()
    {
        cout<<"Enter the department and salary :"<<endl;
        cin>>department>>salary;
    }
    virtual void display()
    {
        person :: display();
        cout<<"Department="<<department<<"\n Salary="<<salary<<endl;
    }
};
int main()
{
    person *bp;
    student o1;
    employee o2;
    o1.input();
    o1.input1();
    o2.input();
    o2.input2();
    bp=&o1;
    bp->display();
    bp=&o2;
    bp->display();
    return 0;
}
