#include <iostream>

using namespace std;

int main()
{
    int age;
    cout<<"enter the  age";
    cin>>age;
    if(age>18&&age<65)
    {
        cout<<"adult";
    }
    else if(age<18)
    {
        cout<<"chlidren";
    }
    else
    {
        cout<<"senior citizen";
    }

    return 0;
}
