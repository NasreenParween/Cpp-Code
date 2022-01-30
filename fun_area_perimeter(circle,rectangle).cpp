#include <iostream>
using namespace std;
int area(int x, int y);
float area(int);
int perimeter(int x, int y);
int main()
{ int r;
cout<<"Enter radius of a circle :"<<endl;
cin>>r;
float A=area(r);
cout<<"Area of circle :"<<A<<endl;
int l,b,p;
cout<<"Enter length and breath of  :"<<endl;
cin>>l>>b;
A=area(l,b);
p=perimeter(l,b);
cout<<"Area of rectangle :"<<A<<endl;
cout<<"Perimeter of rectangle :"<<p<<endl;

return 0 ;
}
float area(int R)
{
    return(3.14*R*R);
}
int area(int l, int b)
{
    return(l*b);
}
int perimeter(int l, int b)
{
    return(2*(l+b));
}
