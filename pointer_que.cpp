#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int r;
    int *pa=&a;
    int *pb=&b;
    int *pr=&r;
    cout<<"\n enter the first number";
    cin>>*pa;
    cout<<"\nenter the second number";
    cin>>*pb;
    *pr=*pa+*pb;
    cout<<endl;
    cout<<*pa<<"+"<<*pb<<"is"<<*pr<<endl;
    return 0;
}
