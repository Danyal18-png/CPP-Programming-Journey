#include <iostream>
using namespace std;
int main() {
   float price, discount, finalPrice;
   
   cout << "Enter product price: ";
   cin >> price;
   
   discount = price * 0.10;
   finalPrice = price - discount;
   
   cout << "Discount is = " << discount << endl;
   cout << "Your Final Price is = " << finalPrice;
   
   return 0;
}
