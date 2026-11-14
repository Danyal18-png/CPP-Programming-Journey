#include <iostream>
using namespace std;
int main() {
   int number, square, cube;
   
   cout << "Enter your number: ";
   cin >> number;
   
   square = number * number;
   cube = number * number * number;
   
   cout << "Square is = " << square << endl;
   cout << "Cube is = " << cube;
   
   return 0;
}
