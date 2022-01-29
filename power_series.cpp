#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double s;
    int i,n;
    cout<<"enter the value of n: "<<endl;
    cin>>n;
    i=1;
    while(i<=n)
    {
        s=s+pow(1,i+1)*(i*i);
     i=i+1;
    }
    cout<<"\n The sum of series is"<<s;
    return 0;
}
