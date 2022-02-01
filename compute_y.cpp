#include <iostream>
using namespace std;
int main()
{
    double x=67.89;
    short int z=14;
    char ch='a';
    double y;
    while(z<=16)
    {
        y=x*z+ch;
        cout<<"y is"<<y<<endl;
        z++;
    }
    return 0;
}
