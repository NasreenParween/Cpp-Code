#include <iostream>
#include <cmath>
using namespace std;
int main()
{   int n1,n2,gcd=0;
    cout<<"enter the first number :"<<endl;
    cin>>n1;
    cout<<"enter the second number:"<<endl;
    cin>>n2;
    if(n1>n2)
    {
     for(int i=1; i<=n1;i++)
        if(n1%i==0&&n2%i==0)
     {
         if(i>gcd)
            gcd=i;
     }
    }
    else if(n2>n1)
    {
        for(int i=1; i<=n2; i++)
            if(n1%i==0&&n2%i==0)
        {
            if(i>gcd)
                gcd=i;
        }
    }
    cout<<"Gcd is"<<gcd<<endl;
    return 0;
}
