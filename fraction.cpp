#include <iostream>
using namespace std;
class fraction
{
   int n, d;
   public:
       void getinput(int x, int y)
       {
           n=x;
           d=y;
       }
       void display()
       {
           cout<<n<<"/"<<d;
       }
};
int main()
{
    int x,y;
    fraction o1,o2;
    o1.getinput(4,5);
    cout<<endl;
    o1.display();
    cout<<endl<<"Enter the value for n and d :"<<endl;
    cin>>x>>y;
    o2.getinput(x,y);
    cout<<endl;
    o2.display();
    return 0;
}


