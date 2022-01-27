#include <iostream>
using namespace std;
class fraction
{
    private:
        int n,d;
    public:
        fraction()
        {
            n=d=0;
        }
        fraction(int i, int j)
        {
            n=i;
            d=j;
        }
        fraction(const fraction &o1)
        {
            n=o1.n;
            d=o1.d;
        }
        void store (int i, int j)
        {
            n=i;
            d=j;
        }
        void print()const
        {
            cout<<n<<"/"<<d<<endl;
        }
        inline fraction operator +(fraction o1);
        fraction operator++();
        fraction operator ++(int);
        void operator +=(fraction);
        fraction operator=(fraction o1)
        {
            n=o1.n;
            d=o1.d;
            return(*this);
        }
};
 fraction fraction :: operator+(fraction o1)
 {
    fraction temp;
    temp.n=n*o1.d+o1.n*d;
    temp.d=d*o1.d;
    return temp;
}
fraction fraction ::operator++()
{
    n+=d;
    return(*this);
}
fraction fraction :: operator++(int)
{
    fraction temp(n,d);
    n+=d;
    return temp;
}
void fraction::operator+=(fraction o1)
{
    n=n*o1.d+o1.n*d;
    d=d*o1.d;
}
int main()
{
    fraction o1, o2(4,5),o3(o2);
   o1.print ();
     o2.print ();
       o3.print ();
      o1.store(5,6);
      cout<<"preincrement\n";
      o3=++o1;
    o3.print ();
    o1.print ();
    cout<<"compound assignment\n";
    o3+=o1;
    o3.print ();
    o1.print ();
    cout<<"binary operator\n";
    o3=o1+o2;
    o1.print ();
    o2.print ();
    o3.print ();
    cout<<"post increment\n";
    o3=o2++;
    o3.print ();
    o2.print ();
    cout<<"assignment operator";
    o3=o2=o1;
    o3.print ();
    o2.print ();
    o1.print ();
    return 0;
}
