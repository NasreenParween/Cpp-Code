#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int a=8,b=2,n;
   double c,f=1000;


cout<<"equation is  T(n)="<<a<<"t(n/"<<b<<")+"<<f<<"n";
cout<<endl;
double l=log(a);
double m=log(b);
double logvalue=(l/m);
cout<<"enter the power of n in f(n)";
cin>>c;
cout<<"value of log a to the base b is"<<logvalue;
cout<<endl;
cout<<endl;
cout<<"THIS EQUATION IS SATISFYING "<<endl;
if(c<logvalue)
{

    cout<<"first case"<<endl;
    cout<<endl;
    cout<<"hence the solution is";
    cout<<"T(n)=Theta "<<c<<" to the power 3 which is equals to theta "<<c;
}
else if(c==logvalue)
{

    cout<<"second case";
     cout<<endl;
    cout<<"hence the solution is";
    cout<<"T(n)=Theta "<<c<<" to the power 3 * log of n";
}

else if(c>logvalue){
    cout<<"third case";
     cout<<endl;
    cout<<"hence the solution is";
    cout<<"T(n)=Theta of f(n) which is equals to theta(1000n)";

}

    //cout<<"your equation is"<<a<<"t(n/"<<b")+"<<f<<"n"<<endl;
}
