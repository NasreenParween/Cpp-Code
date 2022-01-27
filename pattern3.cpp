#include <iostream>
using namespace std;
int main()
{
    int  row;
    int n=10;
    cout<<"enter the number of row:";
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int p=1; p<=n; p++)
        cout<<" ";
        for(int j=1;j<=i;j++)
        cout<<j;
        for(int k=i-1; k>=1; k--)
            cout<<k;
            n--;
        cout<<endl;
    }
    return 0;
}
