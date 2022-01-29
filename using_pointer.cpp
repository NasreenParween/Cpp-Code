#include <iostream>
# include <iomanip>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int *p;
    cout<<"\n enter the three number";
    cin>>a>>b>>c;
    p=&a;
    cout<<setw(3)<<*p<<endl;
    p=&b;
    cout<<setw(3)<<*p<<endl;
    p=&c;
    cout<<setw(3)<<*p<<endl;
    return 0;
}
