#include <iostream>
using namespace std;

int binarySearch(int a[], int l, int r, int x);

int main()
{
    int n;
    cout<<"How many element you want to enter:"<<endl;
    cin >> n;
    int a[n];
    cout<<"Enter the value :"<<endl;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int x;
    cout<<"Enter the number you want to Search :"<<endl;
    cin >> x;
    int result = binarySearch(a, 0, n - 1, x);
    if(result == -1)
        cout << "Element Not found";
    else
        cout << "element Found";
    return 0;
}
int binarySearch(int a[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;


        if (a[mid] == x)
            return mid;


        if (a[mid] > x)
            return binarySearch(a, l, mid - 1, x);

        return binarySearch(a, mid + 1, r, x);
    }
    return -1;
}
