#include <iostream>

using namespace std;

int main()
{
    int a[100];
    int n,x;
    cout<<"how many elements you want to enter\n";
    cin>>n;
    cout<<"enter the elements "<<endl;
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"enter the element you want to search";
    cin>>x;
        int low=0;
        int high =n-1;
        int mid=0;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(a[mid]==x)
            {
                cout<<"element found at position :"<<(mid+1);
                break;
            }
        else if(a[mid]>x)
        high=mid-1;
        else
            low=mid+1;
        if(low>high)
        {
            cout<<"element not found";
        }
    }
    return 0;
}
