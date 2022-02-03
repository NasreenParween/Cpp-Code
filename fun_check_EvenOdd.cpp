#include <iostream>
using namespace std;

int isEven(int num)
{
    return !(num & 1);
}

int main(){

    int num;

    // Inputting number from user
    cout<<"Enter any number: ";
    cin>>num;

    // If isEven() function return 0 then the number is even
    if(isEven(num))
    {
        //printing even number
        cout<<"The number is even.";
    }
    else
    {
        //printing odd number
        cout<<"The number is odd.";
    }

    return 0;

}
