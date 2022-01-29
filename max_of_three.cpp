#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter three number";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
    {
        cout<<"a"<<"="<<a<<endl;
    }
    else
    {
        cout<<c<<endl;
    }
    }
    else if(b>c)
    {
        cout<<"b"<<"="<<b;
    }
    else
        cout<<"c"<<"="<<c;
    return 0;
}
