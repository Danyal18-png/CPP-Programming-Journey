#include <iostream>
using namespace std;
int main() {
   int a, b;
   
   cout << "Enter two numbers: ";
   cin >> a >> b;
   
   if (a > b) {
      cout << a << " is largest";
   }
   else if (a < b) {
      cout << b << " is largest";
   }
   else {
      cout << "Both numbers are equal";
}
   return 0;
}
