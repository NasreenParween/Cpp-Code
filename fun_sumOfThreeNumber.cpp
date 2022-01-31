#include <iostream>

using namespace std;
int add(int x, int y, int z);
int main ()
{
    int s,a,b,c;
    cout<<"Enter the three number :"<<endl;
    cin>>a>>b>>c;
    s=add(a,b,c);
    cout<<" sum is :"<<s;
    return 0;
}
int add(int x, int y, int z)
{
    return(x+y+z);
}
