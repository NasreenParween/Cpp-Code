#include <iostream>
using namespace std;
class polygon
{
protected:
    double area, perimeter;
public:
    polygon()
    {
    }
    ~polygon()
    {
    }
    void displayperi()
    {
        cout<<"perimeter="<<perimeter<<endl;
    }
    void displayarea()
    {
        cout<<"area="<<area<<endl;
    }
};
class triangle:public polygon
{
    int s1,s2,s3;
    void computeperi();
    void computearea();
public:
    triangle(int i, int j, int k)
    {
        s1=i;
        s2=j;
        s3=k;
        computeperi();
        computearea();
    }
};
void triangle:: computeperi()
{
    perimeter=s1+s2+s3;
}

void triangle::computearea()
{
    area=perimeter*(s1+s2+s3);
}
int main()
         {
             triangle o1(1,2,3);
             o1.displayarea();
             o1.displayperi();
             return 0;

        }




