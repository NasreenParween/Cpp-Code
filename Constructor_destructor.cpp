#include <iostream>
using namespace std;
class countobjects
{
    static int counter;
        int x;
    public:
        countobjects(int k)
        {
            counter ++;
            x=k;
        }
        ~countobjects()
        {
            cout<<"x="<<x<<" destructing objects"<<counter--<<endl;
        }
        void display()
        {
            cout<<(++x)<<endl;
            cout<<counter<<endl;
        }
        static void print();
};
int countobjects::counter=0;
void countobjects::print()
{
    cout<<counter<<endl;
}
int main()
{
    countobjects o1(45),o2(67);
    o1.display();
    o1.print();
    o2.display();
    o2.print();
    return 0;
}
