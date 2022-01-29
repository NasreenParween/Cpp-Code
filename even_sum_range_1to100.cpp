#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int f=0;
    for(int i=1; i<=100; i++)
    {
        if(i%2==0)
            f=f+i;
    }
    cout<<"\n sum of even number in the range is: "<<f;
    return 0;
}
