#include<iostream>

using namespace std;

int main()
{
	int n, i, min, a[30]={89, 55, 96, 13, 7, 47, 63, 89, 19, 69, 83, 23, 38, 47, 86, 39, 27, 14, 29, 97, 865, 436, 745, 186, 486, 745, 987, 966, 366, 744};
	char ch;
	min = a[0];
	cout<<"\nThe data element of array:";

	for(i = 1; i < 30; i++)
	{
		cout<<" "<<a[i];
		// Assign min to the current element if its value is lesser than min value.
		if(min > a[i])
			min = a[i];
	}
	cout<<"\n\nMinimum of the data elements of array using linear search is: "<<min;

    return 0;
}
