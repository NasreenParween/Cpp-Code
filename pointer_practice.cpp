#include <iostream>

using namespace std;

int main()
{
    int a;
    int *p=&a;
    int *q=&a;
    int *r=&a;
    cout<<"enter a number";
    cin>>a;
    cout<<*p<<endl;
    cout<<*q<<endl;
    cout<<*r<<endl;

    return 0;
}
