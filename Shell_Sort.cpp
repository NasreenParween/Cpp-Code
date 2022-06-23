/*  C++ Program to implement Shell Sort using Array  */

#include<iostream>

using namespace std;

void sort(int a[],int n)
{
    int gap,i,j,temp;

    for(gap=n/2;gap>0;gap/=2)
    {
        for(i=gap;i<n;i+=1)
        {
            temp=a[i];
            for(j=i;j>=gap&&a[j-gap]>temp;j-=gap)
                a[j]=a[j-gap];

            a[j]=temp;
        }
    }
}

int main()
{
    int a[20],i,n;

    cout<<"Enter size of Array :: ";
    cin>>n;
    cout<<"\nEnter elements to the array :: \n";

    for(i=0;i<n;++i)
    {
        cout<<"\nEnter "<<i+1<<" element :: ";
        cin>>a[i];
    }


    sort(a,n);

    cout<<"\nAfter shell sort, Sorted List is :: \n\n";
    for(i=0;i<n;++i)
    {
        cout<<a[i]<<"  ";
    }

    cout<<"\n";

    return 0;
}
