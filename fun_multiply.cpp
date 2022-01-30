#include <iostream>

using namespace std;
int multiply(int num1,int num2);
int main()
{
    int multiplier;
    int multiplicand;
    cout<<"enter the two number:"<<endl;
    cin>>multiplier>>multiplicand;
    int product= multiply(multiplier,multiplicand);
    cout<<"product of "<<multiplier<<" & "<<multiplicand<<" is "<<product;
    return 0;
}

    int multiply(int num1,int num2)
{
       return(num1*num2);
}

