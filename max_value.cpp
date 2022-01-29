#include <iostream>

using namespace std;
int main()
{
    int n,max,x;
    cout<<"enter the value of n";
    cin>>n;
    max= -1;
    for(int i=1;i<=n;i++)
    {
        cout<<"enter the value of x :";
        cin>>x;
        if(x>max)
            max=x;
        cout<<max;
    }
    return 0;
}
