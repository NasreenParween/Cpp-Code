#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int flag;
    for(int p=1;p<=100;p++)
    {
        flag=0;
        for(int i=2;i<p;i++)
        {
            if (p%i==0)
                flag=1;
        }
        if(flag==1)
            cout<<"not prime"<<p<<endl;
        else
            cout<<"prime"<<p<<endl;
    }

    return 0;
}
