#include <iostream>
using namespace std;
int main() {
   int a, b, quotient, remainder;
   
   cout << "Enter two numbers: ";
   cin >> a >> b;
   
   quotient = a / b;
   remainder = a % b;
   
   cout << "Qoutient is = " << quotient << endl;
   cout << "Remainder is = " << remainder;
   
   return 0;
}
