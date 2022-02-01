#include<iostream>
using namespace std;
int * removeEven( int *& Arr, int size ) {
    int j;
    for(int i = 0;i < size; i++)
    {
        if (Arr[i] % 2 != 0){
            Arr[j] = Arr[i];
            j++;
        }
    }
  // Write your code here
  return Arr;
}

int main(){
  int * arr;      // declaring array
  arr = new int[10];   // memory allocation
  cout << "Before remove even: ";
  for ( int i = 0; i < 10; i++ )
  {
    arr[i] = i;      // assigning values
    cout << arr[i] << " ";
  }
  cout << endl;
  arr = removeEven(arr,10);   // calling removeEven
  cout << "After remove even: ";
  for ( int i = 0; i < 5; i++ )
  {
    cout << arr[i] << " ";    // prinitng array
  }
  delete [] arr;  // deleting allocated memory
  return 0;
}
