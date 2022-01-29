#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,n,i,sum;
    a=0;
    b=1;
    cout<<"enter the number of term to be printed in fibonacci  series:"<<endl;
    cin>>n;
    cout<<"Fibonacci series\n";
    //cout<<a<<" "<<b<<" "<<endl;
    i=1;
    while (i<=n)
    {
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
        i=i+1;
    }

    return 0;
}
