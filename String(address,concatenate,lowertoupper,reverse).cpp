#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    char s1[20], s2[20];
    int ch,n,m,i;
    char *p="hello";
    char ch1='y';
    cout<<"Enter the first string";
    cin>>s1;
    cout<<"Enter the second string";
    cin>>s2;
    while(ch1=='y')
    {
        cout<<"1.Adress of character in string\n";
        cout<<"2.Length of string\n";
        cout<<"3.Concatenate\n";
        cout<<"4.Comparision\n";
        cout<<"5.Lower to Upper case\n";
        cout<<"6.Reverse the string\n";
        cout<<"Enter the choice";
        cin>>ch;
        switch (ch)
        {
            case 1:cout<<"string"<<p<<endl;
                   cout<<"string at based address"<<*p<<endl;
                   cout<<"character next to h"<<*(p+1)<<endl;
                   cout<<"h address"<<static_cast<void*>(p)<<endl;
                   cout<<"e address"<<static_cast<void*>(p+1)<<endl;
                   cout<<"l address"<<static_cast<void*>(p+2)<<endl;
                   cout<<"l address"<<static_cast<void*>(p+3)<<endl;
                   cout<<"o address"<<static_cast<void*>(p+4)<<endl;
                   break;

            case 2:int i,k;
                  for(i=0; s1[i]!='\0'; i++);
                  n=i;
                  for(k=0; s2[k]!='\0'; k++);
                  m=k;
                  cout<<"Length of first string s1"<<n<<endl;
                  cout<<"Length of second string s2"<<m<<endl;
                  break;

            case 3:for(i=0; s1[i]!='\0'; i++);
                   for(int j=0; s2[j]!='\0'; j++,i++)
                   s1[i]=s2[j];
                   s1[i]='\0';
                   cout<<"concatenate string"<<s1<<endl;
                   break;

             case 4:int i1,k1;
                    for(i1=0; s1[i1]!='\0'; i1++);
                    n=i1;
                    for(k1=0; s2[k1]!='\0'; k1++);
                    m=k1;
                    if(n!=m)
                    cout<<"string is not equal in length";
                    else
                    {
                        int x;
                        for(int i=0, j=0; i<n&&j<m; i++, j++)
                        {
                            x=s1[i]-s1[j];
                            if(n>0||x<0)
                                break;
                        }
                        if(x==0)
                        cout<<"strings are equal"<<endl;
                        else if(x>0)
                            cout<<s1<<"will come after"<<s2<<endl;
                        else
                            cout<<s1<<"will come before"<<s2<<endl;
                        }
                        break;
             case 5: for(int i=0; s1[i]!='\0'; i++)
                    if(s1[i]>='a'&& s1[i]<='z')
                    s1[i]=s1[i]-32;
                    cout<<"lower to upper case conversion"<<s1;
                    break;

            case 6:cout<<"reverse of string"<<endl;
                    for(int j=n-1; j>=0; j--)
                        cout<<setw(5)<<s1[j];
        }
    cout<<"\n do you want to continue";
    cin>>ch1;
    }
    return 0;
}
