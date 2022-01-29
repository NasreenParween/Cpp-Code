#include <iostream>
using namespace std;
int main()
{
    int p, n;
    int fact=1 ;
    cout<<"enter the number whose factorial to be computed "<<endl;
    cin>>n;
    p=n;
    while(p>=1)
        {
            fact=fact*p;
            p=p-1;
        }
        cout<<"The factorial of "<<n<<" is "<<fact<<endl;
    return 0;
}
