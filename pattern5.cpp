#include <iostream>
using namespace std;
int main()
{
    int  row;
    char ch, ch1;
    ch='E';
    cout<<"enter the number of row:";
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        ch1 =ch;
        for(int j=1;j<=i;j++)
        {
            cout<<ch1;
            ch1++;
        }
        cout<<endl;
        ch--;
    }
    return 0;
}
