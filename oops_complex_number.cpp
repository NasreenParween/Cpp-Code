#include <iostream>

using namespace std;

class complex
{
   private:
    int real,imag;
   public:
       complex(int r=0,int i=0)
       {
           real=r; imag=i;
       }
       complex operator+(complex const&obj)
       {
           complex c;
           c.real=real+obj.real;
           c.imag=imag+obj.imag;
           return c;
       }
       complex operator*(complex const&obj)
       {
           complex c;
           c.real=real*obj.real;
           c.imag=imag*obj.imag;
           return c;
       }
       void display()
       {
           cout<<real<<"+"<<imag<<"i"<<endl;
       }
};
int main()
{
     complex o1(30,4),o2(6,8);
     complex o3=o1+o2;
    o3.display();
    complex o4=o1*o2;
    o4.display();
    return 0;

}
