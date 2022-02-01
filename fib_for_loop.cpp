#include <iostream>

using namespace std;

int main()
{
    int n,a=0,b=1,nth=0;
    cout<<"Enter the number you want to find fibonacci series"<<endl;
    cin>>n;
    cout<<"Fibonacci series are :"<<endl;
    for(int i=1; i<=n; i++)
    {
        if(n==1)
         {
        cout<<"this is not valid !!Enter valid number"<<endl;
        //continue;
         }
    else if(n==1)
         {
        cout<<a<<",";
        continue;
       }
      else if(n==2)
         {
        cout<<b<<",";
        continue;
       }
       nth=a+b;
       a=b;
       b=nth;
       cout<<nth<<",";

    }
   return 0;

}
