#include<iostream>
using namespace std;

int main()
{
    int z[20];
    int pos = 0;
    int neg = 0;
    int odd = 0;
    int even = 0;
    int zero = 0;
    for(int i=0;i<20;i++)
    {
        cout << "Enter a number\n";
        cin >> z[i];

        if(z[i]>0)
            pos++;
        else if(z[i]<0)
            neg++;
        else
            zero++;
        if(z[i]%2==0)
            even++;
        else
            odd++;
    }
    cout << "Positive " << pos << "\nNegative " << neg <<"\nZero "<<zero<<"\nOdd "<<odd<<"\nEven "<<even<<"\n";
    return 0;
}
