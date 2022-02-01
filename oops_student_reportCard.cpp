#include <iostream>
#include <iomanip>
using namespace std;

class student
{
  public:
  int rollno;
  char name[50];
  char course[50];
   public:
void input_student();
void display_student();

int check(int x)
  {
   int count =0;
   while(x>0)
     { x=x/10;
       count++;
      }
   if(count==4)
      {
        return x;
      }
    else
    {
     cout<<"INVALID FORMAT"<<endl;
     cout<<"Enter Again"<<endl;
     cin>>x;
     check(x);
     }
 }


};

void student :: input_student(){

   int abcd,z;
   cout<<"Enter 4 digit  roll number<<ednl"
      <<endl;
    cin>>abcd;
    z=check(abcd);
    rollno=abcd;


  cout<<"Enter the name of student :"<<endl;
  cin>>name;

  cout<<"Enter the course of student :"<<endl;
  cin>>course;
  }

void student :: display_student()
{
cout<<"rollno=" <<rollno<<endl
    <<"name="<<name
    <<endl<<"course="<<course<<endl;
  }


//derived class
class exam : public student
{
 protected:
  int mark1, mark2, mark3;
  int total_marks,total_percentage;
  public:

  void  input_marks()
  {
   cout<<"Enter  marks1 out of 100"<<endl;
   cin>>mark1;
   if(mark1>=101){
    cout<<"invalid marks enter again"<<endl;
    cin>>mark1;
   }
   if (mark1<=29)
    cout<<" fail in this subject\n\n";

   cout<<"Enter  marks2 out of 100"<<endl;
   cin>>mark2;
   if(mark2>=101)
    { cout<<"invalid marks enter again"<<endl;
      cin>>mark2;
     }
   if (mark2<=29)
   cout<<" fail in this subject\n\n"<<endl;

   cout<<"Enter  marks3 out of 100"<<endl;
   cin>>mark3;
   if(mark3>=101)
    {
      cout<<"invalid marks enter again"<<endl;
      cin>>mark3;
    }
   if (mark3<=29)
      cout<<" fail in this subject\n\n"<<endl;

   }

void display_marks()
{
  total_marks=mark1+mark2+mark3;
  total_percentage=total_marks/3;


 cout<<setw(16)<<"mark1="<<mark1;
  if (mark1<=29){
    cout<<" [student fail in sub1]";}

  cout<<endl<<setw(16)<<"mark2="<<mark2;
  if (mark2<=29){
    cout<<" [student fail in sub2]";
    }

 cout<<setw(16)<<endl <<"mark3="<<mark3;
 if(mark3<=29){
    cout<<" [student fail in sub3]";}

  cout<<endl<<setw(22)<<"total_marks="<<total_marks<<endl;
  cout<<setw(29)<<"total_percentage : "<<total_percentage<<"%"<<endl;

}

void display_result()
  {

   if( mark1>=30 && mark2>=30 && mark3>=30 )
    {
     cout<<setw(26)<<"RESULT : PASS"<<endl;

    { if(total_percentage>=45&&total_percentage<60 )
     cout<<setw(26)<<" SECOND DIVISION"<<endl;

    else if(total_percentage>=30&&total_percentage<45)
     cout<<setw(26)<<" THIRD DIVISION"<<endl;

   else if (total_percentage>=60 &&total_percentage<80)
    cout<<setw(26)<<"FIRST DIVISION"<<endl;

   else
     cout<<setw(26)<<"FIRST DIVISION WITH DISTINCTION"<<endl;

     } }


   else if( mark1<=29 && mark2>=30 && mark3>=30 )
     {cout<<setw(27)<<"RESULT : PROMOTED";}

   else if( mark1>=30 && mark2<=29 && mark3>=30 )
     {cout<<setw(27)<<"RESULT : PROMOTED";}

   else if( mark1>=30 && mark2>=29 && mark3<=29)
     {cout<<setw(27)<<"RESULT : PROMOTED";}

   else
     {cout<<setw(23)<<"RESULT : FAIL";}


  }

};

int main()

{
    student s;
    exam e;

  int n, choice;
  int c;
cout<<"enter the value of n"<<endl;
  cin>>n;
  exam  a[n];
 for(int i=0; i<n;i++)
   {
     cout<<endl<<"\nENTER  DETAILS OF STUDENT:"
     << i+1<<endl<<endl;
     a[i].input_student();
     a[i].input_marks();
     cout<<setw(29)<<" DETAILS OF STUDENT:"
     <<i+1<<endl;
    a[i].display_marks();
    a[i].display_result();
  }
   int j;
  for(int j=0; j<n;j++){
     cout<<endl<<endl<<endl
         << setw(29) <<"DETAILS OF STUDENT:"
         << j+1<<endl;
     a[j].display_marks();
     a[j].display_result();
  }

}
