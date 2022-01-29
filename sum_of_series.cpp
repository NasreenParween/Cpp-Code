#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    double fact, sum=0;
    cout<<"enter the number";
    cin>>n;
    for(int i=1; i<=n;i++)
    {
        fact=1;
        for(int j=1;j<=i; j++)
        {
            fact=fact*j;
        }
        sum=sum+(1/fact);
    }
    cout<<"sum="<<sum;
    return 0;

}
