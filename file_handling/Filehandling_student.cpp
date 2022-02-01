#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
class myexception
{
    char p[20];
public:
    myexception(char*p1)
    {
        strcpy(p,p1);
    }
    void display()
    {
        cout<<p;
    }
};

int main()
{
    ifstream o1;
    char ch;
    int x=0;
    int wordcount,charcount,linecount;
    wordcount=0;
    charcount=0;
    linecount=0;
    o1.open("student.txt");
    try
    {
        if(!o1)
            throw myexception("unable to open file");
        while(o1.get(ch))
        {
            if(ch>='A'&&ch<='z')
                charcount++;
            else if(ch==' ')
                wordcount++;
            else if(ch=='\n')
                linecount++;
        }
        cout<<"character count ="<<charcount<<endl;
        cout<<"wordcount ="<<wordcount<<endl;
        cout<<"linecount ="<<linecount<<endl;
    }
    catch (myexception p)
    {
        cout<<"exception caught";
        p.display();
    }
    cout<<"end of main\n";
    return 0;
}
