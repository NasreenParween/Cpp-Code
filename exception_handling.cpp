#include <iostream>
using namespace std;
int main()
{
    double a,b,d;
     char ch='y';
    while(ch=='y')
   {
        cout<<"enter the two numbers"<<endl;
        cin>>a>>b;
        try
        {
             if(b==0)throw"attempt to divide by zero";
          if(b<0)throw b;
          cout<<"endtry";
          d=a/b;
          cout<<"a/b="<<d<<endl;
        }
        catch(double i)
        {
            cout<<"i="<<i<<endl;
        }
        catch(const char *p)
        {
            cout<<p;
        }
        catch(...)
        {
            cout<<"any exception can be caught"<<endl;
        }
        int z;
        z=a+b;
        cout<<endl<<"z="<<z;
        cout<<"end";
        cout<<"do you want to continue";
        cin>>ch;
   }
    return 0;
}
