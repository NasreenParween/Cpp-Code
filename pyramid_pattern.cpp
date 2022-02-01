#include <iostream>

using namespace std;

int main()
{
   int row;
   int n=10;
   cout<<"Enter the number of rows"<<endl;
   cin>>row;
   for(int i=1;i<=row;i++)
   {
       for(int j=1;j<=n;j++)
        cout<<" ";
        for(int k=1;k<=i;k++)
        cout<<k;
          for(int l=i-1;l>=1;l--)
        cout<<l;
       n--;
       cout<<endl;
   }
    return 0;
}
