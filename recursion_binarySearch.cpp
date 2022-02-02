#include <iostream>
#include<math.h>
using namespace std;
void input(int x[],int n)
{
    cout<<"Enter the elements\n";
    for(int i=0; i<n; i++)
        cin>>x[i];
}
void binsearch(int x[],int n, int x1, int low, int high)
{
    int mid=0;
    if(low>high)
    {
        cout<<"Element not found"<<endl;
        return;
    }
    else
    {
        mid=(low+high)/2;
        if(x[mid]==x1)
        {
            cout<<"Element found at position :"<<(mid+1)<<endl;
            return;
        }
        else if(x[mid]>x1)
            binsearch(x,n,x1,low,mid-1);
        else
            binsearch(x,n,x1,mid+1,high);
    }
}
int main()
{
    int a[50];
    int n;
    cout<<"how many elements you want to enter \n";
    cin>>n;
    input(a,n);
    char ch ='y';
    int x1;
    while(ch=='y')
    {
        cout<<"Enter the element you want to search :"<<endl;
        cin>>x1;
        binsearch(a,n,x1,0,n-1);
        cout<<"Do you want to continue"<<endl;
        cin>>ch;
    }
    return 0;
}

