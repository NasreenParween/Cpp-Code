#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char S[20];
    cout<<"\n enter the string";
    cin>>S;
    cout<<"string length="<<strlen(S)<<endl;
    for (int i='A'; i< 'Z'; i++)
    {
        int count=0;
        for(int j=0; j<strlen(S); j++)
        if(S[j]==i)
        count++;
        if(count!=0)
        cout<<static_cast<char>(i)<<"  appear"<<count<<"times"<<endl;
    }
    return 0;
}
