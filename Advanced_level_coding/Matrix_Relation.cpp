#include <iostream>
using namespace std;
class RELATION
{
private:
 int a[20][20];
 int x;
public:
 void getinput()
 {
 cout<<"enter the order of matrix relation\n ";
 cin>>x;
 cout<<"enter elements in matrix\n";
 for(int i=0;i<x;i++)
 {
 for(int j=0;j<x;j++)
 cin>>a[i][j];
 }
 }
 void display()
 {
 for(int i=0;i<x;i++)
 {
 for(int j=0;j<x;j++) {
 cout<<a[i][j]<<" ";
 }
 cout<<endl;
 }
 }
 bool reflexive()
 {
 for(int i=0;i<x;i++)
 {
 if(a[i][i]!=1)
 return false;
 }
 return true;
 }
 bool symmetric()
 {
 for(int i=0;i<x;i++)
 {
 for(int j=0;j<x;j++)
 {
 if(a[i][j]==1 && a[j][i]!=1)
 return false;
 }
 }
 return true;
 }
 bool antisymmetric()
 { for(int i=0;i<x;i++)
 {
 for(int j=0;j<x;j++)
 {
 if(a[i][j]==1 && a[j][i]==1 && i!=j)
 {
 return false;
 }
 }
 }
 return true;
 }
 bool transitive()
 {
 for(int i=0;i<x;i++)
 {
 for(int j=0;j<x;j++)
 {
 for(int k=0;k<x;k++)
 {
 if(a[i][j]==1&&a[j][k]==1&&a[i][k]!=1)
 return false;
 }
 }
 }
 return true;
 }
};
int main(){
 RELATION r1;
 int ch1;
 char ch='y';
 while(ch=='y')
 {
 cout<<"1.Input and display\n";
 cout<<"2.reflexive relation\n";
 cout<<"3.symmetric relation\n";
 cout<<"4.anti-symmetric relation\n";
 cout<<"5.transitive relation\n";
 cout<<"enter the choice\n";
 cin>>ch1;
 switch(ch1)
 {
 case 1:cout<<"r1 matrix.......\n";
 r1.getinput();
 cout<<"matrix r1 is......\n";
 r1.display();
 break;
 case 2:if(r1.reflexive())
 cout<<"r1 relation is reflexive\n";
 else
 cout<<"r1 relation is not reflexive\n";
 break;
 case 3:if(r1.symmetric())
 cout<<"r1 relation is symmetric\n";
 else
 cout<<"r1 relation is not symmetric\n"; break;
 case 4:if(r1.antisymmetric())
 cout<<"r1 relation is anti-symmetric\n";
 else
 cout<<"r1 relation is not anti-symmetric\n";
 break;
 case 5:if(r1.transitive())
 cout<<"r1 relation is transitive\n";
 else
 cout<<"r1 relation is not transitive\n";
 break;
 }
 cout<<"Do you want to continue\n";
 cin>>ch;
 }
 return 0;
}
