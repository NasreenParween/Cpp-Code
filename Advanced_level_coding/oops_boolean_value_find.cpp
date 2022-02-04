#include <iostream>
using namespace std;
class Truthtable
{
private:
 int x,y;
public:
 void conjunction()
 {
 cout<<"x y x&&y"<<endl;
for(int i=0;i<2;i++)
 {
 for(int j=0;j<2;j++)
 {
 x=i;y=j;
 cout<<x<<" "<<y<<" "<<x*y<<endl;;
 }
 }
 }
 void disjunction()
{
 int z;
 cout<<"x y x||y"<<endl;
 for(int i=0;i<2;i++)
{
 for(int j=0;j<2;j++)
 {
 x=i;y=j,z=x||y;
 cout<<x<<" "<<y<<" "<<z<<endl;;
 }
 }
 }
 void exclusiveOR()
 {
 int z;
 cout<<"x y x XOR y"<<endl;
 for(int i=0;i<2;i++)
 {
 for(int j=0;j<2;j++)
 {
 x=i;y=j,z=((!x&&y)||(x&&!y));
 cout<<x<<" "<<y<<" "<<z<<endl;;
 }
 }
 }
 void Conditional()
 {
 int z;
 cout<<"x y x=>y"<<endl;
 for(int i=0;i<2;i++)
 {
 for(int j=0;j<2;j++)
 {
 x=i;y=j,z=!(x&&!y);
 cout<<x<<" "<<y<<" "<<z<<endl;;
 }
 }
 }
 void Biconditional()
 {
 int z;
 cout<<"x y x<=>y"<<endl;
 for(int i=0;i<2;i++)
 {
 for(int j=0;j<2;j++)
 {
 x=i;y=j,z=(x&&y)||(!x&&!y);
 cout<<x<<" "<<y<<" "<<z<<endl;;
 }
 }
 }
 void exclusiveNOR()
 {
 int z;
 cout<<"x y x XNOR y"<<endl;
 for(int i=0;i<2;i++)
 {
 for(int j=0;j<2;j++)
 {
 x=i;y=j,z=(x&&y)||(!x&&!y);
 cout<<x<<" "<<y<<" "<<z<<endl;;
 }
 }
 }
 void Negation()
 {
 int z;
 cout<<"x ~x"<<endl;
 for(int i=0;i<2;i++)
 {
 x=i;
 z=!x;
 cout<<x<<" "<<z<<endl;
 }
 }
 void NAND()
 {
 int z;
 cout<<"x y x NAND y\n";
 for(int i=0;i<2;i++)
 {
 for(int j=0;j<2;j++)
 {
 x=i;y=j;z=!(x&&y);
 cout<<x<<" "<<y<<" "<<z<<endl;
 }
 }
 }
 void NOR()
 {
 int z;
 cout<<"x y x NOR y\n";
 for(int i=0;i<2;i++)
 {
 for(int j=0;j<2;j++)
 {
 x=i;y=j;z=!(x||y);
 cout<<x<<" "<<y<<" "<<z<<endl;
 }
 }
 }
};
int main()
{
 Truthtable t1;
 char ch='y';
 int ch1;
 while(ch=='y')
 {
 cout<<"1.Conjunction\n";
 cout<<"2.Disjunction\n";
 cout<<"3.Exclusive-OR\n";
 cout<<"4.Conditional\n";
 cout<<"5.Biconditional\n";
 cout<<"6.Exclusive-NOR\n";
 cout<<"7.Negation\n";
 cout<<"8.NAND\n";
 cout<<"9.NOR\n";
 cout<<"Enter the choice\n";
 cin>>ch1;
 switch(ch1)
 {
 case 1:t1.conjunction();
 break;
 case 2:t1.disjunction();
 break;
 case 3:t1.exclusiveOR();
 break;
 case 4:t1.Conditional();
 break;
 case 5:t1.Biconditional();
 break;
 case 6:t1.exclusiveNOR();
 break;
 case 7:t1.Negation();
 break;
 case 8:t1.NAND();
 break;
 case 9:t1.NOR();
 break;
 }
 cout<<"Do you want to continue\n";
 cin>>ch;
 }
 return 0;
}
