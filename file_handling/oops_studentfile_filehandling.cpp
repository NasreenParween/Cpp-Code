#include <iostream>
#include <fstream>
using namespace std;
class student
{
public:
    char name[20];
    int rollno;
    int Class;
    int year;
    double totalmarks;
    void getinp()
    {
        cout<<"enter rollno,name,class,year,and totalmarks";
        cin>>rollno>>name>>Class>>year>>totalmarks;
    }
};
int main()
{
    student o1,o2,o3,o4,o5;
    o1.getinp();
    o2.getinp();
    o3.getinp();
    o4.getinp();
    o5.getinp();
    ofstream f1;
    f1.open("student.text",ios::out);
    if(!f1)
    {
        cout<<"unable to open file";
         return 0;
    }
    f1<<o1.name;
    f1.width(10);
    f1<<o1.rollno;
    f1.width(10);
    f1<<o1.Class;
    f1.width(10);
    f1<<o1.year;
    f1.width(10);
    f1<<o1.totalmarks<<endl;
    f1<<o2.name;
    f1.width(10);
    f1<<o2.rollno;
    f1.width(10);
    f1<<o2.Class;
    f1.width(10);
    f1<<o2.year;
    f1.width(10);
    f1<<o2.totalmarks<<endl;
    f1<<o3.name;
    f1.width(10);
    f1<<o3.rollno;
    f1.width(10);
    f1<<o3.Class;
    f1.width(10);
    f1<<o3.year;
    f1.width(10);
    f1<<o3.totalmarks<<endl;
    f1<<o4.name;
    f1.width(10);
    f1<<o4.rollno;
    f1.width(10);
    f1<<o4.Class;
    f1.width(10);
    f1<<o4.year;
    f1.width(10);
    f1<<o4.totalmarks<<endl;
    f1<<o5.name;
    f1.width(10);
    f1<<o5.rollno;
    f1.width(10);
    f1<<o5.Class;
    f1.width(10);
    f1<<o5.year;
    f1.width(10);
    f1<<o5.totalmarks<<endl;
    f1.close();
    if(!f1)
    {
        cout<<"unable to close f1"<<endl;
    }
    ifstream f2;
    f2.open("student.txt",ios::in);
    if(!f2)
    {
        cout<<"unable to open file"<<endl;
    }
    cout<<"file output"<<endl;
    char ch;
    while(f2.get(ch))
        cout<<ch;
    return 0;


}

