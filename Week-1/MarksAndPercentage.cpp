#include <iostream>
using namespace std;
int main() {
   float s1, s2, s3, s4, s5;
   float marks, percentage;
   
   cout << "Enter marks of five subjects: ";
   cin >> s1 >> s2 >> s3 >> s4 >> s5;
   
   marks = s1 + s2 + s3 + s4 + s5;
   percentage = (marks / 500) * 100;
   
   cout << "Total marks = " << marks << endl;
   cout << "Percentage = " << percentage << "%";
    
   return 0;
}
