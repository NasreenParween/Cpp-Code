#include <iostream>
#include <climits>
using namespace std;

void setArraydata(int Arr[][3], int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        cout << "enter the elements " << endl;
        for (int j = 0; j < y; j++)
        {
            cin >> Arr[i][j];
        }
    }
}
void printArraydata(int Arr[][3], int x, int y)
{
    for (int i = 0; i < x; i++)
    {

        for (int j = 0; j < y; j++)
        {
            cout << Arr[i][j];
        }
        cout << endl;
    }
}
void getAverage(int Arr[][3], int x, int y)
{
    float sum = 0, avg;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            sum += Arr[i][j];
        }
    }
    avg = sum / (x * y);
    cout <<"Average is: "<<avg<<endl;
    return;
}
void findmax(int Arr[][3], int x, int y)
{
    int max = INT_MIN;

    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < y; ++j)
        {
            if (Arr[j][i] > max)
                max = Arr[j][i];
        }
        cout << "Max element in column " << i + 1 << " is:" << max << endl;
        max = INT_MIN;
    }

    return;
}
int main()
{
    int Array[3][3];
    const int m = 3;
    const int n = 3;
    setArraydata(Array, m, n);
    printArraydata(Array, m, n);
    getAverage(Array, m, n);
    findmax(Array, m, n);

    return 0;
}
