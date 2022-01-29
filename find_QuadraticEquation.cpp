//find quadratic equation
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
     float a,b,c,r1,r2,d,D;
    cout<<"Enter the value of a,b,c"<<endl;
    cin>>a>>b>>c;
    //float a=5,b=2,c=1,r1,r2,d,D;
    d=(b*b)-(4*a*c);
    if(d<0)
    {
        float im,real;
        D=sqrt(-d);
        real=b/(2*a);
        im=D/(2*a);
        cout<<"roots are complex,\n";
        cout<<"(1)"<<-real<<"+"<<im<<"i\n";
        cout<<"(2)"<<-real<<"-"<<im<<"i\n";

    }
    else if(d=0)
    {
            D=sqrt(d);
            r1=(-b+D)/(2*a);
            r2=(-b-D)/(2*a);
            cout<<"roots are real and distinct.\n"<<"(1)"<<r1<<"\n(2)"<<r2;
    }
    else
    {
        r1=(-b/(2*a));
        cout<<"roots are real and same.\n"<<"(1,2)"<<r1;
    }

    return 0;
}
