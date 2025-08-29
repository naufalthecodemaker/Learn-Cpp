#include <iostream>
using namespace std;

int main(){
  string name;
  int age;

  cout << "Enter your name: ";
  getline(cin >> ws, name); // include space on string and get rid of buffer input (white space)

  cout << "Enter your age: ";
  cin >> age;

  cout << "Hello, " << name << endl;
  cout << "You're " << age << " years old";
  return 0;
}