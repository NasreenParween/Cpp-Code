#include <iostream>
#include <fstream>
using namespace std;
class student
{
public:
    char name[20];
    int age;
    double marks;
    void getinp()
    {
        cout<<"Enter name,age,and marks :"<<endl;
        cin>>name>>age>>marks;
    }
};
int main()
{    student o1,o2,o3,o4,o5;
    o1.getinp();
    o2.getinp();
    o3.getinp();
    o4.getinp();
    o5.getinp();
    ofstream f1;
    f1.open("std.text",ios::out);
    if(!f1)
    {
        cout<<"unable to open file";
         return 0;
    }
    f1<<o1.name;
    f1.width(10);
    f1<<o1.age;
    f1.width(10);
    f1<<o1.marks<<endl;
    f1<<o2.name;
    f1.width(10);
    f1<<o2.age;
    f1.width(10);
    f1<<o2.marks<<endl;
    f1<<o3.name;
    f1.width(10);
    f1<<o3.age;
    f1.width(10);
    f1<<o3.marks<<endl;
    f1<<o4.name;
    f1.width(10);
    f1<<o4.age;
    f1.width(10);
    f1<<o4.marks<<endl;
    f1<<o5.name;
    f1.width(10);
    f1<<o5.age;
    f1.width(10);
    f1<<o5.marks<<endl;
    f1.close();
    if(!f1)
    {
        cout<<"unable to close f1"<<endl;
    }
    ifstream f2;
    f2.open("std.txt",ios::in);
    if(!f2)
    {
        cout<<"unable to open file"<<endl;
    }
    cout<<"file output"<<endl;
    char ch;
    while(f2.get(ch))
        cout<<ch;
        cout<<"\n copy one file to another file after removing whitespaces"<<endl;
        ifstream f3;
        f3.open("std.text",ios::in);
        ofstream f4;
        f4.open("std2.text",ios::out);
        while(f3.get(ch))
        {
            if(ch!=' ' && ch!='\t'&&ch!='\n')
                f4.put(ch);
        }
        f3.close();
        f4.close();
    return 0;


}


