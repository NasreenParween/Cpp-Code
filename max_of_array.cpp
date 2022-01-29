#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a[7];
    cout<<"enter the element of an array "<<endl;
    for(int i=0; i<7; i++)
    {
        cin>>a[i];
    }
    int max=0;
    cout<<"element of an array are"<<endl;
    for(int i=0; i<7; i++)
    {
        cout<<setw(5)<<a[i]<<endl;
        if(a[i]>max)
            max=a[i];
    }
    cout<<"The maximum element of an array is :"<<max<<endl;

    return 0;
}

