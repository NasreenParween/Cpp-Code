#include <iostream>
#include <cmath>
#include<cstring>

using namespace std;
class triangle
{
    double area;
    char type[20];
    public:
      triangle(char *p)
      {
          area=0;
          strcpy(type,p);
      }
      void computearea(int a, int b,int c);
      void computearea(int a, int b);
      void computearea(int a);
      triangle operator=(triangle o1);
      int operator==(triangle o1);
     void display()
     {
         cout<<"type of the triangle is"<<type<<endl;
         cout<<"area is"<<area<<"\n";
     }
};
void triangle:: computearea(int a, int b, int c)
{
    double s;
    s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
}
void triangle:: computearea(int a, int b)
{
    area=1.0/2*a*b;
}
void triangle::computearea(int a)
{
    area=sqrt(3)/4*a*a;
}
triangle triangle::operator=(triangle o1)
{
    area=o1.area;
    strcpy(type,o1.type);
    return (*this);
}
 int triangle :: operator==(triangle o2)
{
    if(area==o2.area)
        return 1;
    else
        return 0;
}
int main()
         {
             triangle o1("scalene"), o2("equilateral"),o3("isosceles");
             o1.computearea(1,2,3);
             o2.computearea(3);
             o3.computearea(4,5);
             o1.display();
             o2.display();
             o3.display();
             cout<<"operator overloading"<<"\n";
             o2=o3;
             o2.display();
             o3.display();
             if(o2==o3)
                cout<<"area is equal";
             else
                cout<<"arera is not equal";
        }



