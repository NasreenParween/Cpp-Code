#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	ifstream f1;
	char name[20];
	int roll_no;
	f1.open("student2.txt");
	if(!f1)
	{
		cerr<<"\nError in file opening!!!";
		return 0;
	}
	f1>>name>>roll_no;
	cout<<"Name="<<name<<"\t"<<"Roll number="<<roll_no;
	f1.close();
	return 0;
}
