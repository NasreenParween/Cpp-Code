#include <iostream>
using namespace std;
int main()
{
    int  row;
    char ch;
    cout<<"enter the number of row:";
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        ch ='A';
        for(int j=1;j<=i;j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}
