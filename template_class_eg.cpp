#include <iostream>

using namespace std;
template <class T, int size>
class number
{

public :
    T arr[size];
    void insert()
    {

        int a=1;
        for(int i=0; i<=size; i++)
        {
            arr[i]=a;
            a++;
        }
    }
    void display()
    {
        for(int i=0; i<size; i++)
        {
            std::cout<<arr[i]<<" " ;
        }
    }
};

int main()
{
    number<int, 15>n1;
    n1.insert();
    n1.display();
    return 0;
}
