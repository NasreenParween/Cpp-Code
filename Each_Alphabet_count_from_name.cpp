#include <iostream>
#include<cstring>
using namespace std;
int main()
{

int count;
char s[20];
cout<<"enter the string:";
cin>>s;

for(int i='A';i<'z';i++)
{
count=0;
for(int j=0;j<strlen(s);j++)
{
if(s[j]==i)
count++;
}
if(count!=0)
cout<<static_cast<char>(i)<<" appear "<<count<<" times\n";
}
return 0;
}

