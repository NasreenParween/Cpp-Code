#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int neg(int n)
{
if(n==0)
return 1;
else if(n==1)
return 0;
}
int orf(int a, int b)
{
if((a==1&&b==1)||(a==1&&b==0)||(a==0&&b==1))
return 1;
else if(a==0&&b==0)
return 0;
}
int con(int c,int d)
{
if(c==1&&d==0)
return 0;
else if((c==1&&d==1)||(c==0&&d==1)||(c==0&&d==0))
return 1;
}
int main()
{
int p,q,a1,a2,a3;
char ch;
do{
cout<<"enter the boolean value for P"<<" "<<endl;
cin>>p;
cout<<"enter the boolean value for Q"<<" "<<endl;
cin>>q;
a1=neg(p);   // ~p (negation)

a2=orf(q,p);  // Qvp (OR)

a3=con(a1,a2);   //~p->Qvp (conditional)
cout<<"p"<<" "<<"q"<<" "<<"~P->QvP "<<endl;
//cout<<"value of the given expression"<<" "<<a3<<endl;
cout<< p <<" "<< q <<"   "<< a3 <<endl;

cout<<"Do you want to continue  :"<<endl ;
 cin>>ch;
} while(ch=='y'|| ch=='y');

return 0;
}

