#include <iostream>
#include<math.h>
using namespace std;
int main(int argc, char *argv[])
{
    int n;
    double s=0;
    cout << "argc="<<argc<<endl;
    for(int i=0; i< argc; i++)
        cout<<"argv="<<argv[i]<<endl;
    n=atoi(argv[1]);
    int i=1;
    while(i<=n)
    {
        s=s+pow(-1,i+1)*(1.0/(i*i));
        i=i+1;
    }
    cout<<"\n the sum of series is"<<s;

    return 0;
}
