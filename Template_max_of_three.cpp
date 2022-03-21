#include <iostream>

using namespace std;

template <class X>
X big(X a, X b , X c)
{
    if(a>b)
        return(a);
    else if(b>c)
        return(b);
    else
        return(c);
}

int main()
{
    cout<<big(4,5,6)<<endl;
    cout<<big(6.7,5.8,6.9);
    return 0;
}
