#include<iostream>
using namespace std;

const int n = 10;
class Student_class
{
    public:
    int marks[n];
    void input()
    {
        for(int i = 0; i <n; ++i)
        {
            cout<<"Enter the marks of all  student "<<i+1<<" : ";
            cin>>marks[i];
        }
    }
    void update()
    {
        for(int i = 0; i <n; ++i)
        {
            marks[i] = marks[i] + 5;
        }
    }
    void display()
    {
        for(int i = 0; i <n; ++i)
        {
            cout<<marks[i]<<endl;
        }
    }
};
int main()
{
    Student_class o1;
    o1.input();
    o1.update();
    cout<<"UPDATED MARKS: "<<endl;
    o1.display();
    return 0;
}
