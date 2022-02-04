#include<iostream>
using namespace std;
int RR1( int n )
{
	if(n==0)
	return n+1 ;
	else
	return RR1(n-1) + n ;
}
int RR2( int n )
{
	if(n==0)
	return n+1 ;
	else
	return RR2(n-1) + n*n ;
}
int RR3( int n )
{
	if(n==1)
	return n ;
	else
	return 2*RR3((n/2)) + n ;
}

int main()
{
	cout<<"*Program for Recuurence Relation*"<<endl;

int  val_rr1 , val_rr2 , val_rr3 , num;
char choice;
do
{
cout<<"ENTER THE VALUE OF 'n' : ";
cin>>num;
cout<<"\n** YOU HAVE THE FOLLOWING CHOICE **";
cout<<"\n1.FOR THE REOCCURENCE RELATION T(n)=T(n-1)+n where T(0)=1 ";
cout<<"\n2.FOR THE REOCCURENCE RELATION T(n)=T(n-1)+n^2 where T(0)=1 ";
cout<<"\n3.FOR THE REOCCURENCE RELATION T(n)=2*T(n/2)+n where T(1)=1 ";
int ch ;
cout<<"\nEnter your choice : ";
cin>>ch;
switch(ch)
{
	case 1: val_rr1=RR1(num);
	        cout<<"\nValue of RECURSIVE RELATION ONE IS : "<<val_rr1 ;
	        break ;
	case 2: val_rr2=RR2(num);
	        cout<<"\nValue of RECURSIVE RELATION ONE IS : "<<val_rr2 ;
	        break ;
	case 3: val_rr3=RR3(num);
	        cout<<"\nValue of RECURSIVE RELATION ONE IS : "<<val_rr3 ;
	        break ;
  default : cout<<"\nWrong Choice ";
	        break;


}
cout<<"\nDo you want to continue ? \nif yes then press y : ";
cin>>choice;
}while(choice=='y'||choice=='Y');
return 0;
}
