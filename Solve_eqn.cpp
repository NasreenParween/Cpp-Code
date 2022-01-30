#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,c,d,x;
    cout<<"Enter the value of a,b,c,d in other order for expresssion a*b/c-d%10:"<<endl;
    cin>>a>>b>>c>>d;
    x=a*b/c-d%10;
    cout<<"result:"<<x;
    return 0;
}
