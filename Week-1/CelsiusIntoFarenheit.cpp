#include <iostream>
using namespace std;
int main () {
   float celsius, farenheit;
   
   cout << "Enter temperature in celsius: ";
   cin >> celsius;
   
   farenheit = (9.0 / 5.0) * celsius + 32;
   
   cout << "Temperature in Farenheit = " << farenheit;
   
   return 0;
}
