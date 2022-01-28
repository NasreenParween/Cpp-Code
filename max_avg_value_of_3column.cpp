#include <iostream>
using namespace std;
// question 2
void setArraydata(int Arr[][3],int x,int y)
{
for(int i=0;i<x;i++){
        cout<<"enter the elements "<<endl;
    for(int j=0;j<y;j++)
        {
        cin>>Arr[i][j];
    }
}
}
void printArraydata(int Arr[][3],int x,int y)
{
for(int i=0;i<x;i++)
    {
        cout<< endl;
    for(int j=0;j<y;j++){
        cout<<Arr[i][j];
    }
}
}
float getAverage(int Arr[][3],int x,int y)
{
float sum=0,avg;
for(int i=0;i<x;i++)
    {
    for(int j=0;j<y;j++)
    {
        sum+=Arr[i][j];
    }
}
    avg=sum/(x*y);
    return avg;


}
int findmax(int Arr[][3],const int x,const int y)
{
int maximum=Arr[0][0];
 for(int i=0;i<y;++i)
 {
     int maximum=Arr[0][i];
  for(int j=1;j<x;++j)
  {
   if(Arr[j][i]>maximum)
    maximum=Arr[j][i];

  }
 }
 cout<<"\nMaximum Element:"<<maximum;

}
int main(){
    int Array[3][3];
const int m=3;
const int n=3;
setArraydata(Array,m,n);
printArraydata(Array,m,n);
cout<<"\nAverage ="<<getAverage(Array, m, n);
findmax (Array,m,n);


return 0;
}
