#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char name [20];
    cout<<"Enter the name :"<<endl;
    for(int i=0; i<7; i++)
        cin>>name[i];
    cout<<"Name is as follow :"<<endl;
    for(int i=0; i<7; i++)
        cout<<"name["<<i<<"]="<<setw(3)<<name[i]<<endl;
    return 0;
}
