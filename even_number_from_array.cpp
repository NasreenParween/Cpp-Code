#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i;
    int a[7];
    int n;
    cout<<"How may element you want to enter in array :"<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the value "<<i<< ":" <<endl;
        cin>>a[i];
    }
    cout<<"Element are :";
    for(int i=0; i<n; i++)
    {
        cout<<setw(5)<<a[i];
        cout<<endl;
    }
    for(int i=1; i<n; i++)
    {
        if(a[i]%2==0)
            cout<<"Even number  are"<<a[i];
        cout<<endl;
    }
    return 0;
}
