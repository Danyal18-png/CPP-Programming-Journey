#include <iostream>
using namespace std;
int main() {
   float length, width, perimeter;
   
   cout << "Enter your length: ";
   cin >> length;
   
   cout << "Enter your width: ";
   cin >> width;
   
   perimeter = 2 * (length + width);
   
   cout << "Perimeter of Rectangle is = " << perimeter;
   
   return 0;
}
