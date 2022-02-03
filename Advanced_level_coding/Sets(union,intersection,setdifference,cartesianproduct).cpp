#include<iostream>
using namespace std;
class SET
{
 private:
 int a[20],size;
 public:
 int getinput()
 {
 cout<<"Enter the cardinality of set: \n";
 cin>>size;
 cout<<"Enter the elements in array: \n";
for(int i=0;i<size;i++)
 cin>>a[i];
 return size;
}
void display()
{
 int i,j,k;
 for(i=0;i<size-1;i++)
 {
 for(j=i+1;j<size;)
 {
 if(a[i]==a[j])
 {
 for(k=j;k<=size-1;k++)
 a[k]=a[k+1];
 size--;
 }
 else
 j++;
 }
 }
for(i=0;i<size;i++)
{
cout<<a[i]<<" ";
}
cout<<endl;
}
bool subset(SET setA )
{
 int i,j;
for( i=0;i<size;i++)
{
for(j=0;j<setA.size;j++)
{
if(a[i]==setA.a[j])
break;
}
if(j==setA.size)
{
return false;
}
}
return true;
}
SET Union(SET setA)
{
SET setB;
int k=size+setA.size;
setB.size=k;
int i,j;
for(i=0,k=0;i<size;i++,k++)
 {
 setB.a[k]=a[i];
 }
 for(j=0;j<setA.size;k++,j++)
 {
 setB.a[k]=setA.a[j];
 }
 return setB;
}
SET Intersection(SET setA)
{
SET setB;
int i,j,k=0;
for(i=0;i<size;i++)
 {
 for(j=0;j<setA.size;j++)
 {
 if(a[i]==setA.a[j])
 {
 setB.a[k]=a[i];
 k++;
 }
 }
 }
 if(k==0)
 {
 cout<<"Intersection of two sets is an empty set\n";
 }
 setB.size=k;
 return setB;
}
SET complement()
{
 SET setA;
 int i,j,k=0,counter=0;
 SET setU;
 cout<<"Universal set......\n";
 setU.size=setU.getinput();
 cout<<"Elements in universal set are-> ";
 setU.display();
 for(i=0;i<setU.size;i++)
 {
 for(j=0;j<size;j++)
 {
 if(setU.a[i]==a[j])
 {
 counter++;
 }
 }
 if(counter==0)
 {
 setA.a[k]=setU.a[i];
 k++;
 }
 counter=0;
 }
 setA.size=k;
 return setA;
}
SET operator-(SET setA)
{
 SET setB;
 int i,j,k=0,counter=0;
 for(i=0;i<size;i++)
 {
 for(j=0;j<setA.size;j++)
 {
 if(a[i]==setA.a[j])
 {
 counter++;
 }
 }
 if(counter==0)
 {
 setB.a[k]=a[i];
 k++;
 }
 counter=0;
 }
 setB.size=k;
 return setB;
}
void operator*(SET setA)
{
 SET setB;
 int i,j,k=0;
 for(i=0;i<size;i++)
 {
 for(j=0;j<setA.size;j++,k++)
 {
 cout<<"{"<<a[i]<<" , "<<setA.a[j]<<"}"<<endl;
 }
 cout<<endl;
 }
}
};
int main()
{
SET setA;
SET setB;
SET setC;
 SET setD;
int ch1,x,y,z;
bool p;
char ch='y';
while(ch=='y')
{
cout<<"1.INPUT and DISPLAY\n";
cout<<"2.SUBSET\n";
cout<<"3.Union and intersection\n";
cout<<"4.complement\n";
cout<<"5.Set difference and symmetric difference\n";
cout<<"6.Cartesian product\n";
cout<<"Enter the choice\n";
cin>>ch1;
switch(ch1)
{
case 1:cout<<"SetA......\n";
 x=setA.getinput();
 cout<<"SetB......\n";
 y=setB.getinput();
 cout<<"Elements in setA are\n";
 setA.display();
 cout<<"Elements in setB are\n";
 setB.display();
 break;
 case 2:if(x<=y)
 {
 p=setA.subset(setB);
 if(p)
 {
 cout<<"SetA is the subset of setB\n";
 }
 else
 {
 cout<<"Set A is not the subset of setB\n";
 }
 }
 else if(y<x)
 {
 p=setB.subset(setA);
 if(p)
 {
 cout<<"SetB is the subset of setA\n";
 }
 else
 {
 cout<<"Set B is not the subset of setA\n";
 }
 }
 break;
 case 3:cout<<"Union of 2 sets -> ";
 setC=setA.Union(setB);
 setC.display();
 cout<<"Intersection of 2 sets -> ";
 setD=setA.Intersection(setB);
 setD.display();
 break;
 case 4:setC=setA.complement();
 cout<<"Complement of setA\n";
 setC.display();
 setD=setB.complement();
 cout<<"Complement of setB\n";
 setD.display();
 break;
 case 5:setC=setB-setA;
 cout<<"Set difference B and A\n";
 setC.display();
 cout<<"Symmetric difference of B and A \n";
 setD=(setB.Union(setA))-(setB.Intersection(setA));
 setD.display();
 break;
 case 6:cout<<"Cartesian product of setA and setB \n";
 setA*setB;
 break;
}
cout<<"Do you want to continue\n";
cin>>ch;
}
}
