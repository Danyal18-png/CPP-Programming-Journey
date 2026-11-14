#include <iostream>
using namespace std;
int main() {
   float basicSalary, hra, ma, grossSalary;
   
   cout << "Enter basic salary: ";
   cin >> basicSalary;
   
   hra = basicSalary * 0.20;
   ma = basicSalary * 0.10;
   grossSalary = basicSalary + hra + ma;
   
   cout << "House rent allowance = " << hra << endl;
   cout << "Medical allowance = " << ma << endl;
   cout << "Gross Salary = " << grossSalary;
   
   return 0;
}
