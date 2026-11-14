#include <iostream>
using namespace std;
int main() {
   int days, years, weeks, remainDays;
   
   cout << "Enter total days: ";
   cin >> days;
   
   years = days / 365;
   days = days % 365;
   weeks = days / 7;
   remainDays = days % 7;
   
   cout << "Years = " << years << endl;
   cout << "Weeks = " << weeks << endl;
   cout << "Days = " << remainDays;
   
   return 0;
}
