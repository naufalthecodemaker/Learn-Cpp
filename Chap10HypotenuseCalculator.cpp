#include <iostream>
#include <cmath>
using namespace std;

int main(){
  double a, b, c;

  cout << "Hypotenuse Calculator" << endl;
  cout << "Enter the a value: ";
  cin >> a;

  cout << "Enter the b value: ";
  cin >> b;

  c = sqrt(pow(a,2) + pow(b,2));

  cout << "Hypotenuse: " << c;

  return 0;
}