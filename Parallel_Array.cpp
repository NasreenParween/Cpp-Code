#include <iostream>
#include <string>

using namespace std;
int main() {
   int max = 0, index = 0;
   string empName [ ] = {"Harry", "Sally", "Mark", "Frank", "Judy" };
   string empDept [ ] = {"IT", "Sales", "IT", "HR", "Sales"};
   int empSal[ ] = {10000, 5000, 20000, 12000, 5000 };
   int n = sizeof(empSal)/sizeof(empSal[0]);

   for(int i = 0; i < n; i++) {
      if (empSal[i] > max) {
         max = empSal[i];
         index = i;
      }
   }
   cout << "The highest salary is "<< max <<" and is earned by"<<empName[index]<<" belonging to "<<empDept[index]<<" department";
   return 0;
}
