#include <iostream>
using namespace std;
int GCD(int a,int b)
{
     int rem;
     rem=a%b;
     if(rem==0)
        return b;
     else
        return GCD(b,rem);
}
int main()
{
     int a,b;
     char ch='y';
     while(ch=='y')
     {
     cout<<"enter the two numbers"<<endl;
     cin>>a>>b;
     int z=GCD(a,b);
     cout<<"GCD of the two numbers are:"<<z;
     cout<<"Do you want to continue";
     cin>>ch;
    }
return 0;
}
