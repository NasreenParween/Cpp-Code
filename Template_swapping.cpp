#include <iostream>

using namespace std;
template <class S>
S swapFunction( S &a, S &b )
{
 S temp;
 temp=a;
 a=b;
 b=temp;
}

int main()
{
    int a1=24,b1=66;
    float x=11.2, y=89.4;
    char  c1='n',c2='m';
    cout<<"Before passing value in swapfunction"<<endl;
    cout<<"a1 ="<<a1<<" b1 ="<<b1<<endl;
    cout<<"x ="<<x<<" y ="<<y<<endl;
     cout<<"c1 ="<<c1<<" c2 ="<<c2<<endl;

    swapFunction(a1,b1 );
    swapFunction(x,y );
    swapFunction(c1,c2 );


    cout<<"After passing value in swapfunction"<<endl;
    cout<<"a1 ="<<a1<<" b1 ="<<b1<<endl;
    cout<<"x ="<<x<<" y ="<<y<<endl;
     cout<<"c1 ="<<c1<<" c2 ="<<c2<<endl;

    return 0;
}
