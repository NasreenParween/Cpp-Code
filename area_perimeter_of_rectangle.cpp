#include <iostream>
using namespace std;
void computeareaperimeter(int a, int b, int &perimeter , double &area)
{
    perimeter = 2*(a+b);
area=a*b;
}
int main()
{
    int x,y,p;
    double a;
    cout<<"Enter the value of two sides of rectangle"<<endl;
    cin>>x>>y;
    computeareaperimeter(x,y,p,a);
    cout<<"Area of rectangle:"<<a<<endl;
    cout<<"perimeter of rectangle :"<<p<<endl;
    return 0;
}
