#include <iostream>

using namespace std;

class Automobile
{
 public:
    char company_name[60]={'T','O','Y','O','T','A'};
    char chasis_number=20;
    virtual void display()
    {
        cout<<"company_name :"<< company_name<<endl;
        cout<<"chasis_number :"<< chasis_number<<endl;
    }
};
class twowheeler: public  Automobile
{
public:
    int model_number=4;
    int year=2004;
    virtual void display()
    {
        cout<<"model_number :"<<model_number<<endl;
        cout<<"year :"<<year<<endl;
    }
};
class fourwheeler:public Automobile
{
public:
    char brand_type[30]={'A','L','T','I','S'};
    char vechile_type[20]={'C','A','R'};
    double purchase_value=2450000;
   virtual void display()
    {
        cout<<"brand_type :"<< brand_type<<endl;
        cout<<"vechile_type :"<< vechile_type<<endl;
        cout<<"purchase_value :"<< purchase_value<<endl;
    }
};
int main()
{
    Automobile *oc=new Automobile();
    oc->display();
    delete oc;
    oc=new fourwheeler();
    oc->display();
    delete oc;
    oc=new twowheeler();
    oc->display();
     return 0;
}
