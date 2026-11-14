#include <iostream>
using namespace std;
int main() {
   float salary, bonus, totalSalary;
   
   cout << "Enter basic salary: ";
   cin >> salary;
   
   cout << "Enter bonus: ";
   cin >> bonus;
   
   totalSalary = salary + bonus;
   
   cout << "Total Salary = " << totalSalary;
   
   return 0;
}
