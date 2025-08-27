#include <iostream>
using namespace std;

int main(){
  /*
    type conversion = conversion a value of one data type to another 
                      Implicit = automatic
                      Explicit = precede value with new data type (int)
  */

  int x = 3.14; 
  cout << x << endl; // the output will be 3 -> implicit conversion (automatic)

  double y = (int) 3.14;
  cout << y << endl; // the output will be 3 -> explicit conversion 

  // another example

  char a = 100;
  cout << a << endl; // the output will be d (based on ASCII table) implicit conversion 
  
  cout << (char) 100; // explicit conversion
  
  return 0;
}