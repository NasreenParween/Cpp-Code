#include<iostream>
#include<conio.h>
using namespace std;

int perm(int n,int r)
{

    if(r>n)
        return 0;
    else

    {

        if(r==0)

            return 1;

        else

            return(n*perm(n-1,r-1));
    }

}

int comb(int n,int r)

{

    if(r>n)

        return 0;

    else if((n==0)|(r==0)|(n==r))

        return 1;

    else
      return(comb(n-1,r-1)+comb(n-1,r));

}
int main()

{
    cout<<".... Find permutation and combination..."<<endl;
    char choice;
    do
    {
    int n,r,ch,a,b,ch1;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    cout<<"Enter the value of r :"<<endl;
    cin>>r;
    cout<<"1.Permutation"<<endl;
    cout<<"2.Combination"<<endl;
    cout<<"3.exit"<<endl;
     cout<<"Enter your choice"<<endl;
    cin>>ch;
   switch(ch)
      {

        case 1: a=perm(n,r);

                cout<<"Permutation is :"<<a<<endl;

                break;

        case 2: b=comb(n,r);

                cout<<"Combination is :"<<b<<endl;

                break;

        case 3: exit(0);

        default:cout<<"wrong choice";
    }
    cout<<"Do you want to continue"<<endl;
    cin>>choice;
    }
while(choice=='y'||choice=='Y');
 return 0;

}
