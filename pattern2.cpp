#include <iostream>
using namespace std;
int main()
{
    int  row;
    cout<<"enter the number of row:";
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=5;j++)
        {
                cout<<"*";
        }
        cout<<endl;
    }
   return 0;
}

