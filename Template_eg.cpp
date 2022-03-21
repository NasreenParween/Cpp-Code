#include <iostream>

using namespace std;
template <class T>
T maximum( T n, T m)
{
    return(n>m)?n:m;
}
int main()
{
  int n1, m1;
  float x, y;
  char c1,c2;
  cout<<"Enter the integer value of n1,m1"<<endl;
  cin>>n1>>m1;
  cout<< " maximum value is "<<maximum(n1,m1)<<endl;

  cout<<"Enter the  floating value of x,y"<<endl;
  cin>>x>>y;
  cout<< " maximum value is "<<maximum(x,y)<<endl;

  cout<<"Enter the character of  c1, c2"<<endl;
  cin>>c1>>c2;
  cout<< " maximum value is "<<maximum(c1,c2)<<endl;
    return 0;
}
