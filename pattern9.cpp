#include <iostream>

using namespace std;

int main()
{
    int row=7;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==1||i==7)
                cout<<"=";
            else if (j==1||j==5)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }


    return 0;
}
