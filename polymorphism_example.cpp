#include <iostream>
#include<new>
using namespace std;
class base
{
    public:
    void print()
    {
        cout<<"non virtual base";
    }
    virtual void display()
    {
     cout<<"virtual base";
    }
};
class derived:public base
{
public:
    void print()
    {
        cout<<"non virtual derived";
    }
    void display()
    {
        cout<<"virtual derived";
    }
};

int main()
{
    base *bp;
    derived o1;
    bp=new derived();
    bp->print();
    cout<<endl;
    bp->display();
    delete bp;
    return 0;
}
