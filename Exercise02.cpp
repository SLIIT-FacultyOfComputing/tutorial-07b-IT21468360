#include "Rectangle.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
  // ========= DO NOT CHANGE THE INPUT CODE BELOW ==================
   int length, width, radius;
   cout << "Enter length of Rectangle : ";
   cin >> length;
   cout << "Enter width of Rectangle : ";
   cin >> width;
   cout << "Enter radius of Circle : ";
   cin >> radius;
   // ======== DO NOT CHANGE THE CODE GIVEN ABOVE ====================
   
   // 1. Create a dynamic Rectangle type variable (pointer)
  Rectangle* R1;
   // 2. Create a dynamic Rectangle Object set the length and width that was input from the keyboard
  R1 = new Rectangle();
   // 3. Create a dynamic Circle type variable (pointer)
  Circle* C1;
   // 4. Create a dynamic Circle Object set radius that was input from the keyboard
  C1 = new Circle();
   // 5. Call the display method of the Rectangle Object
   R1-> display();
   
   // 6. Call the display method of the Circle Object
   C1-> display();
   // 7. Delete the Rectangle Object from memory
  delete R1;
   // 8. Delete the Circle Object from memory
  delete C1;
  
   // ============ DO NOT CHANGE THE CODE BELOW ===================
   cout << "End of Program" << endl;
  
}
