#include <iostream>
using namespace std;
class error
{
public:
    virtual void display()
    {
        cout<<"inside error class";
    }
};
class arithmetic:public error
{
public:
    virtual void display()
    {
        cout<<"inside arithmetic";
    }
};
class divbyzero:public arithmetic
{
public:
    virtual void display()
    {
        cout<<"attempt to divide by zero";
    }
};
class divbyneg:public arithmetic
{
public:
    virtual void dispaly()
    {
        cout<<"divide by negative number";
    }
};
class badoperator:public arithmetic
{
public:
    virtual void display()
    {
        cout<<"bad operator";
    }
};
void oper(char oper, double x, double y) throw(int, divbyzero,divbyneg)
{
    double z;
    switch(oper)
    {
        case '+':z=x+y;
                 cout<<"addition= "<<z;
                 break;
       case '*':z=x*y;
                 cout<<"multiplication= "<<z;
                 break;
       case '/': if(y==0)
                 throw divbyzero();
                 if(y<0)
                    throw divbyneg();
                 z=x/y;
                 cout<<"division= "<<z;
                 break;
                 default: throw badoperator();
    }
}

int main()
{
   char ch,ch1='y';
   double x,y;
   while(ch1=='y')
   {
       cout<<"enter the operator, operands";
       cin>>ch>>x>>y;
       try
       {
           oper(ch,x,y);
           cout<<"inside try";
           cout<<endl;
       }
       catch (error &o1)
       {
           o1.display();
       }
       catch (...)
       {
           cout<<"no catch matched";
       }
           cout<<"do you want to continue";
           cin>>ch1;
   }
    return 0;
}
