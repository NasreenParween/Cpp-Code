#include <iostream>
using namespace std;
int main()
{
    int a[10],n ,x,i;
    cout<<"how many elements"<<endl;
    cin>>n;
    cout<<"enter the element in an array"<<endl;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"enter the element you want to search"<<endl;
    cin>>x;
    for(i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            cout<<"element is found at position"<<n;
            break;
        }
    }
   if(i==n)
        cout<<"element is not found";


    return 0;
}
