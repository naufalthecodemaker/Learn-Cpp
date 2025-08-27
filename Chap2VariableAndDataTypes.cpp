#include <iostream>

int main(){
  int x = 5;
  double price = 10.99;
  char grade = 'A';
  bool power = true;
  
  std::cout << x << "\n";
  std::cout << price << "\n";
  std::cout << grade << "\n";
  std::cout << power << "\n";

  // make and display a string
  std::string name = "Spongebob";
  std::cout << name << "\n\n";

  std::cout << "Hello " << name << "\n";
  std::cout << "Your grade is " << grade << "\n";
  return 0;
}