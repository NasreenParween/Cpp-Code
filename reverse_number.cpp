#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int a[20];
    int n;
    cout<<"how many elements you want to enter "<<endl;
    cin>>n;
    cout<<"Enter the elements :"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"reverse of an arary is \n";
    for(int i=n-1; i>=0; i--)
        cout<<setw(5)<<a[i];
    return 0;
}
