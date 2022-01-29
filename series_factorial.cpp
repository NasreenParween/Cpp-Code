#include <iostream>
using namespace std;
int main()
{
    int n,i;
    double sum=0;
    double fact,j;
    cout<<"enter the value of n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        sum=sum+(1/fact);
    }
    cout<<"sum="<<sum;
    return 0;
}
