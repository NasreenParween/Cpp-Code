#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    ifstream f1;
    f1.get(ch);
    f1.open("ABC.txt");
    if(!f1) {
        cerr<<"error in opening file \n";
        exit;
    }
    int charcount=0,linecount=0,spacecount=0;
    bool flag=0;
    while(f1.get(ch)) {
        flag=1;
    if(ch==' ') {
        spacecount++;
    }
    else if(ch=='\n') {
        // spacecount++;
        linecount++;
    }
    else {
        charcount++;
    }

    }
    if(flag==0) {
        cout<<"file is empty \n";
    }

    else {
    cout<<"number of characters : "<<charcount<<endl;
    cout<<"number of lines : "<<linecount+1<<endl;
    cout<<"number of words : "<<spacecount+1<<endl;
    }
    f1.close();

    /*CONTEXT OF FILE
    this is first line
    this is second line
    this is third line
    this is fourth line */


return 0;
}
