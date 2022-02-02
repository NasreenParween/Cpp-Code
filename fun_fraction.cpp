#include <iostream>

using namespace std;
double divide(double x, double y)
{
    if(y==0)
        throw "divbyzero";
    if(y<0)
        throw y;
    double z=x/y;
    return z;
}
int main()
{
    double p,q,quotient;
    char ch='y';
    while(ch=='y')
    {
        cout<<"enter the numbere p and q\n";
        cin>>p>>q;
        try
        {
            quotient=divide(p,q);
            cout<<"quotient="<<quotient<<endl;
        }
        catch(const char *p)
        {
            cout<<"attempt to divide by zero\n";
        }
        cout<<"do you want to continue\n";
        cin>>ch;
    }
    return 0;
}
