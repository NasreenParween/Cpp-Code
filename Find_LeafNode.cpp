#include<iostream>
using namespace std;

//calling main function
int main()
{
    int deg,int_ver,l;
//Declaring variables

    cout<<"enter the degree of tree:";
    cin>>deg;

    cout<<"enter the value of internal vertices:";
    cin>>int_ver;

    l=int_ver*(deg-1)+1;
//formula to find leaves

    cout<<"the number of leaves:"<<l<<endl;
}
