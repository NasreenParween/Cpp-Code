#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    int a[20],i,j,k,n;
    cout<<"......Removing duplicates in an array......"<<endl;
    cout<<"Enter the size of an array : "<<endl;
    cin>>n;
    cout<<"enter the element of array :"<<endl;
         for(int i=0; i<n; i++)
         {
        cin>>a[i];
         }
        for (int i=0; i<n-1; i++)
        {
            if (a[i]==a[i+1])
            {
                for (int k=i; k<n; k++)
                    a[k]=a[k+1];
                n=n-1;
            }
        }
        cout<<"Array after removal of duplicate the elements";
    for(int i=0; i<n; i++)
        cout<<setw(5)<<a[i];
    return 0;
}
