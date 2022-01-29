#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, p,q;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    int i;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            p=p+1;
        }
    }
    if(p>q)
    {
        cout<<"\nNumber is not prime";
    }
    else
    {
        cout<<"\nnNumber is prime";
    }
    return 0;
}
