#include <iostream>
#include <cstring>
using namespace std;
class box
{
    public:
    int length;
    int breadth;
    int height;
    box()
    {
        length=4;
        breadth=5;
        height=6;
    }
    virtual void display()
    {
        cout<<"length is :"<<length<<"cm"<<endl;
        cout<<"breadth is :"<<breadth<<"cm"<<endl;
        cout<<"height is :"<<height<<"cm"<<endl;
    }
};
class boxweight:public box
{
    public:
     double weight;
    boxweight()
   {
       weight=8;
   }
 void display()
   {
       cout<<"weight is :"<<weight<<"kg"<<endl;
   }
};
class boxcolor:public box
{
    public:
    char color[20];
    boxcolor()
    {
        strcpy(color,"black");
    }
    void display()
    {
        cout<<"color of box is :"<<color<<endl;
    }
};

int main()
{
    box *bp;
    box b1;
    boxweight o1;
    boxcolor o2;
    bp=&o1;
    bp->display();
    bp=&o2;
    bp->display();
    bp=&b1;
    bp->display();
    return 0;
}
