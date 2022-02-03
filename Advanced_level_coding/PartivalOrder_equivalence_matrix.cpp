#include <iostream>
using namespace std;
class relation{
private:
 int arr[20][20];
 int x;
public:
 void getinput()
 {
 cout<<"enter the order of matrix of the relation";
 cin>>x;
 cout<<"enter the elements in matrix\n";
 for(int i=0;i<x;i++){
 for(int j=0;j<x;j++)
 cin>>arr[i][j];
 }
 }
 void display()
 {
 for(int i=0;i<x;i++){
 for(int j=0;j<x;j++)
 cout<<arr[i][j]<<" ";
 cout<<endl;
 }
 }
 bool reflexive()
 {
 for(int i=0;i<x;i++)
 {
 if (arr[i][i]!=1)
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
 if(arr[i][j]==1 && arr[j][i]!=1)
 return false;
 }
 }
 return true;
 }
 bool antisymmetric()
 {
 for(int i=0;i<x;i++)
 {
 for(int j=0;j<x;j++)
 {
 if(arr[i][j]==1 && arr[j][i]==1 && i!=j)
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
 if(arr[i][j]==1 && arr[j][k]==1 && arr[i][k]==1)
 return true;
 }
 }
 }
 return false;
 }
};
int main()
{
 relation r1;
 int ch1;
 bool a,b;
 char ch='y';
 while(ch=='y')
 {
 cout<<"1.Input and display\n";
 cout<<"2.Equivalence relation\n";
 cout<<"3.Partial-order relation\n";
 cout<<"enter the choice\n";
 cin>>ch1;
 switch(ch1)
 {
 case 1:cout<<"r1 matrix.......\n";
 r1.getinput();
 cout<<"matrix r1 is......\n";
 r1.display();
 break;
 case 2:a=(r1.reflexive() && r1.symmetric() && r1.transitive());
 if(a)
 cout<<"r1 relation is equivalence relation\n";
 cout<<"r1 relation is not equivalence relation\n";
 break;
 case 3:b=(r1.reflexive() && r1.antisymmetric() && r1.transitive());
 if(b)
 cout<<"r1 relation is partial-ordered relation\n";
 else
 cout<<"r1 relation is not partial-ordered relation\n";
 break;
 }
 cout<<"Do you want to continue\n";
 cin>>ch;
}
 if(!a && !b)
 cout<<"None\n";
 return 0;
}
