#include <iostream>

using namespace std;
template <class T>
T calculate(T a, T b, T c)
{
    T result=a+b+c;
    return result;
}
int main()
{

    int a=5, b=6,c=9;
     float x=5.9, y=6.1,z=9.2;
    cout<<"Addition of a,b and c "<<calculate(a,b,c)<<endl;
    cout<<"Addition of x,y and z "<<calculate(x,y,z);

    return 0;
}
