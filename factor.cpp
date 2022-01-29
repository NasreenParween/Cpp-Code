#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter a positive number:"<<endl;
    cin>>n;
    cout<<"factor of"<< n <<"are"<<endl;
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
            cout<<i<<endl;
    }
    return 0;
}
