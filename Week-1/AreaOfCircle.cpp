#include <iostream>
using namespace std;
int main() {
   float radius, area;
   
   cout << "Enter your radius: ";
   cin >> radius;
   
   area = 3.14 * radius * radius;
   
   cout << "Area of circle is = " << area;
   
   return 0;
}
