#include <iostream>
#include <cstring>
using namespace std;
class person
{
    char name[20];
    public:
        person()
        {

        }
    person(char *p)
    {
     strcpy(name, p);
    }
    void getname()
    {
        cout<<"Enter the name :"<<endl;
        cin>>name;
    }
    void display()
    {
        cout<< name<<endl;
    }
};
  class student: public person
  {
    char course[20];
    double marks;
    int year;
public:
    student()
    {

    }
    student(char *p, char *p1, double m, int y):person(p)
    {
        strcpy (course, p1);
        marks=m;
        year=y;
    }
    void getstudentdetails();
    void displaystudentdetails();
  };
  void student::getstudentdetails()
  {
      cout<<"Enter the course,marks,and year of admission :"<<endl;
      cin>>course>>marks>>year;
  }
  void student::displaystudentdetails()
  {
      cout<<"course="<<course<<endl;
      cout<<"marks="<<marks<<endl;
      cout<<"year="<<year<<endl;
  }
  class employee: public person

  {
      char department[20];
      double salary;
      public:
      employee()
      {

      }
      employee(char *p, char *p1,double s):person(p)
      {
          strcpy(department,p1);
          salary=s;
      }
      void getemployeedetails()
      {
          cout<<"Enter the department and salary"<<endl;
          cin>>department>>salary;
      }
      void displayemployeedetails()
      {
          cout<<"department= "<<department<<" salary= "<<salary;
      }
  };
  int main()
  {
      person o1;
      o1.getname();
      o1.display();
      student o2;
      o2.getname();
      o2.getstudentdetails();
      o2.displaystudentdetails();
      employee o3;
      o3.getname();
      o3.getemployeedetails();
      o3.display();
      o3.displayemployeedetails();
  }


