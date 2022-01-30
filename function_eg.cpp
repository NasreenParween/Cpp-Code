#include <iostream>

using namespace std;
void printone(int x);
int main()
{
    int a=5;
    printone(a);
     a=33;
    printone(a);
    return 0;
}


        void printone(int x)
        {
        cout << x << endl;
        return;
        }
