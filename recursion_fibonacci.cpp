#include <iostream>
using namespace std;
int fibonacciseries(int a)
{
 if(a==0||a==1)
 return a;
 else
 return(fibonacciseries(a-1)+fibonacciseries(a-2));
}
int main()
{
 int n;
 cout<<"enter the number of terms to be printed in fibonacci series\n";
 cin>>n;
 cout<<"FIBONACCI SERIES:-> ";
 for(int i=0;i<n;i++)
 cout<<fibonacciseries(i)<<" ";
 return 0;
}
