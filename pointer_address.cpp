#include <iostream>

using namespace std;

int main()
{
int a;
int *p;
a=14;
p=&a;
cout<<a<<" "<<&a<<endl;
cout<<" "<<*p<<" "<<a<<endl;
    return 0;
}
