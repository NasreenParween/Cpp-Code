#include <iostream>
#include<fstream>
using namespace std;
int EVEN_SUM(int arr[], int x)
{
    int sum=0;
   for(int i=0;i<x;i++)
   {
       cout<<"\n"<<arr[i];
       try {
       if(arr[i]%2 == 0)
       {
           sum=sum+arr[i];
       }
       else
        throw "NUMBER IS ODD, NOT ADDING IT";
   }
   catch(...)
   {
       cout<<" ODD NUMBER NOT ADDING"<<endl;
   }
   }
   return sum;
}

int main()
{
    int s, arr[20],x;
    cout<<"Enter number of elements: "<<endl;
    cin>>x;
    for(int i=0; i<x;i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
        s=EVEN_SUM(arr, x);
       // cout<<"\nSUM OF EVEN NUMBERS:"<<s;
        ofstream fout;
        fout.open("Sum.txt");
        fout<<"sum of even number"<<s;
        fout.close();
        ifstream fin;
        fin.open("Sum.txt");
        if(!fin)
            cout<<"\n error in reading"<<endl;
        while(!fin.eof())
        {
            fin>>s;
        cout<<"sum of even number is :"<< s<<endl;
        }
        fin.close();

    return 0;
}
