#include <iostream>

using namespace std;

const int n=10;
class student
{
    public:
       // int n;
    int marks[n];
    void reading_marks()
    {
         for(int i=0; i<=n; i++)
    {
    cout<<"Enter the marks of students "<<i+1<<" : ";
    cin>>marks[i];
    }
    }
    void insertion_sort()
    {
        for(int i=1; i<=n; i++)
        {
            int current =marks[i];
            int j=i-1;
            while(marks[j]>current && j>=0)
            {
                marks[j+1]=marks[j];
                j--;
            }
            marks[j+1]=current;
        }
         for(int i=0; i<=n; i++)
         {
               cout<<marks[i]<<" "<<endl;
    }
    }
    void printing_marks()
    {
        for(int i=0; i<=n; i++)
         {
               cout<<marks[i]<<" "<<endl;
    }
    }
};

int main()
{
 student o1;
 o1.reading_marks();
   cout<<"\n printing all the marks before insertion sort"<<endl;
 o1.printing_marks();
 cout<<"\n Insertion sort of all marks"<<endl;
    o1.insertion_sort();
     return 0;
}
