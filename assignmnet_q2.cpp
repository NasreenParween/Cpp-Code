#include <iostream>
#include <fstream>
using namespace std;

int main()
{
     ifstream fin;
     fin.open("ABC.txt");
     if(!fin)
     {
         cerr<<"\n Error is opening the file."<<endl;
     }
     char ch;
     int i,c=0,s=0,l=1;
     while(fin)
     {
         fin.get(ch);
         i=ch;
         if((i>63&&i<91)||(i>96&&i<123))
            c++;
         else if(ch==' ')
            s++;
        else if(ch=='\n')
         l++;
     }
     cerr<<"number of characters:"<<c<<endl;
     cerr<<"number of spaces:"<<s<<endl;
     cerr<<"number of lines:"<<l<<endl;
     fin.close();

    return 0;
}
