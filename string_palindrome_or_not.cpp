#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int i, j ,len=0,flag=0;
    char str1[20],str2[20];b

    cout<<"Enter the String:"<<endl;
    gets(str1);
    len=strlen(str1)-1;
    for(i=len, j=0; i>=0; i--,j++)
            str2[j]=str1[i];
    if(strcmp(str1,str2))
    flag=1;
    if(flag==1)
        cout<<str1 <<", String is  not pallindrome";
    else
        cout<<str1<<", string  is pallindrome";
    return 0;
}
