#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter the value of a,band c\n";
    cin>>a>>b>>c;
    cout<<"maximum number is\n";
    if(a>b && a>c)
    {
        cout<<a;
    }
    else if (b>a && b>c)
    {
        cout<<b;
    }
    else
    {
        cout<<c;
    }

    return 0;
}
