#include <iostream>
using namespace std;
int main() {
   float height, cm;
   
   cout << "Enter your height: ";
   cin >> height;
   
   cm = 2.54 * height;
   
   cout << "Your Height in cm = " << cm;
   
   return 0;
}
