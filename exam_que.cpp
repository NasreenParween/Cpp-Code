
#include<iostream>
using namespace std;

class NewFloat
{
	public:
		float floatData;
		NewFloat(float );
		void printData();
		float deciData();
		NewFloat operator ++(int );
		int operator <(NewFloat );

};
int main()
{
	NewFloat n(5.6),n1(8.5);
	n.printData();
	float a = n.deciData();
	cout<<"Decimal value of "<<n.floatData<<" is "<<a<<endl;
	cout<<"Object after post incrementing...\n";
	n++;
	n.printData();
	n1.printData();
	int b=n<n1;
	if(b==1)
	{
		cout<<"Second object is greater than first.\n";
	}
	else
	cout<<"Second object is not greater than first,\n";
	cout<<"Int casting float member of first object....\n";
	int c=static_cast<int>(n.floatData);
	n.printData();
	cout<<"After int casting float of object 1 to a value of a is..\n";
	cout<<c;
}
NewFloat :: NewFloat(float f)
{
	this->floatData=f;
}
void NewFloat :: printData()
{
	cout<<"Float value of object is "<<this->floatData<<endl;
}
float NewFloat :: deciData()
{
	int n=this->floatData;
	float dec=this->floatData-n;
	return dec;
}
NewFloat NewFloat::operator ++(int x)
{
	NewFloat n(0);
	n.floatData=this->floatData;
	this->floatData++;
	return n;
}
int NewFloat::operator<(NewFloat n)
{
	if(this->floatData < n.floatData)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
