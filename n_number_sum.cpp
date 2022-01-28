#include <iostream>

using namespace std;
int fun(int n);
int fun(int n)

{

     int s=0,a[n];
     cout<<"\n Enter the number:";
     for(int i=0; i<n; i++)
     {
         try
         {
             cin>>a[i];
             if(a[i]<0)
             {
                 throw a[i];
             }
             s+=a[i];
         }
         catch(...)
         {
             cout<<"\n NEGATIVE NUMBEER"<<a[i]<<" "<<"ENTERED.NOT ADDING IT"<<endl;
         }
     }
     cout<<"\n sum:"<<s;
     cout<<"\n original number entered:";
     for(int i=0; i<n; i++)
     {
         cout<<"\n"<<a[i];
     }
}
      int main()
      {
         int n;
         cout<<"\n enter the number of elements(value of n):";
         cin>>n;
         fun(n);
      }

