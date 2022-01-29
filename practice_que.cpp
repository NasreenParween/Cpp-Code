#include <iostream>
using namespace std;
class NewFloat
{
    float floatData;
    public:
    NewFloat()
    {
        floatData=0.0;
    }
    NewFloat(float f)
    {
        floatData=f;
    }
    operator int()const;
    void printData();
    float deciData();
    NewFloat operator++(int);
    int operator<(NewFloat& a);
};
inline void NewFloat::printData()
{
    cout<<floatData;
}
float NewFloat::deciData()
{
    int a=floatData;
    return (floatData-a);
}
NewFloat NewFloat::operator++(int a)
{
    NewFloat temp;
    floatData= floatData+1.0;
    return temp;
}
int NewFloat::operator<(NewFloat& a)
{
    if(floatData<a.floatData)
    return 1;
    else
    return 0;
}
NewFloat::operator int() const
{
    return( static_cast <int>(floatData));
}
int main()
{   float num;
    cout<<"enter the number";
    cin>>num;
    NewFloat a(num);
    a.printData();
    cout<<"\nDecimal part: "<<a.deciData();
    int t=int(a);
    cout<<"\nInteger part: "<<t;
    a++;
    cout<<"\nAfter increament: ";
    a.printData();
    cout<<endl;
    NewFloat b(8.5);
    if(a<b)
    {
       a.printData();
       cout<<" is less than ";
       b.printData();
    }
    else
    {   a.printData();
       cout<<" is greater than ";
       b.printData();
    }
return 0;

}
