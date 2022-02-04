#include <iostream>
using namespace std;
int main()
{
 int arr[10][10], n, i, j;
 cout << "Enter the size of the matrix:\n";
 cin >> n;
 cout << "Enter the elements for the matrix:" << endl;
 for (i = 0; i < n; i++)
 {
 for (j = 0; j < n; j++)
 {
 cin >> arr[i][j];
 }
 }
 int point = 0;
 for (i = 0; i < n; i++)
 {
 for (j = 0; j < n; j++)
 {
 if (((i != j) && (arr[i][j] == 0)) || ((i == j) && (arr[i][j] == 1)))
 {
 point = 1;
 break;
 }
 }
 }
 if (point == 1)
 cout << "Given Matrix does not shows the complete graph."<<endl;
 else
 cout << "Given Matrix shows the complete graph."<<endl;
 return 0;
}

