#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream f1;
    char name[20];
    int rollno;
    f1.open("student3.txt");
    if(!f1)
    {
        cout<<"error in opening file";
        return 0;
    }
    f1>>name>>rollno;
    cout<<name<<rollno;
    f1.close();
    if(f1.fail())
    {
        cout<<"file is not closed";
    }
    ofstream f2;
    f2.open("student3.txt");
    cout<<"enter the name and rollno";
    cin>>name>>rollno;
    f2<<name<<rollno;
    return 0;
}
