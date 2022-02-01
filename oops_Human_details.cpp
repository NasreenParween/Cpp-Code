
#include<iostream>
#include <string>
using namespace std;
class Human
{
    private:
           int age;
           string name;
    public:
           Human()
          {
              cout<<"Construction of class Human is called..!!\n";
              cout<<"Enter name:";
              cin>>name;
              cout<<"Enter age:";
              cin>>age;

          }

          virtual void printDetails();

};

 void Human:: printDetails()
 {
   cout<<"Name and age of Human are "<<endl<<name<<"\t"<<age<<endl;
 }
class Adult:public Human
{
  private:
        string voterID;
  public:
  Adult()
  {cout<<"Enter Adult age:";
     int a;cin>>a;
      cout<<"Constructor of class Adult is called..!! \n";
      if(a>=18){
          cout<<"You are adult. ";
      }
      else
      cout<<"You are not adult";

  }
  virtual void input();
  virtual void printDetails();
};
void Adult:: input()
 {
              cout<<"Enter Adult voterID:";
              cin>>voterID;;


 }
void Adult:: printDetails()
 {
   cout<<"Adult's voterID is "<<endl<<voterID<<endl;
 }
class child:public Human
{
  private:

          string schoolName;
  public:
  child ()
  {   cout<<"Enter child age:";
     int a;cin>>a;
      cout<<"Constructor of class child is called..!! \n";
      if(a>0||a<18){
        cout<<"You are child";

      }
  }
  virtual void input();
  virtual void printDetails();
};
void child:: input()
 {
              cout<<"Enter child's School name:\n";
              cin>>schoolName;


 }
void child:: printDetails()
 {
   cout<<"child's school name is "<<endl<<schoolName<<endl;
 }

int main()
{
    // string n; int p;

    //  Human* obj=new Human(n,p);

    //  obj->printDetails();
    //  delete obj;
    // cout<<"\nEnter Adult age:";
    // int a;
    // cin>>a;

    Adult* obj=new Adult();
    obj->input();
    obj->printDetails();
    delete obj;


    child* obj2=new child();
    obj->input();
    obj->printDetails();
    delete obj;

    return 0;
}
