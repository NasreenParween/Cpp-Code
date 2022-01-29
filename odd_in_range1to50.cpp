#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout<<"\nprinting all odd number in range [1,50] :"<<endl;
    for(int i=1; i<=50; i++)
    {
        if(i%2!=0)
        {
            cout<<i<<",";
        }
    }
    return 0;
}
