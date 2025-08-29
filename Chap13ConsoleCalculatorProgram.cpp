#include <iostream>
using namespace std;

int main(){
  char op;
  double num1, num2, result;

  cout << "SIMPLE CALCULATOR" << endl;
  cout << "Enter the first number: ";
  cin >> num1;

  cout << "Enter the second number: ";
  cin >> num2;

  cout << "Enter the operator (+ - * /): ";
  cin >> op;

  switch (op)
  {
  case '+':
    result = num1 + num2;
    cout << "\n" << "Result: " << result;
    break;

  case '-':
    result = num1 - num2;
    cout << "\n" << "Result: " << result;
    break;

  case '*':
    result = num1 * num2;
    cout << "\n" << "Result: " << result;
    break;

  case '/':
    if(num2 == 0){
      cout << "Can't divide by 0 (undefined)";
    } else{
      result = num1 / num2;
      cout << "\n" << "Result: " << result;
    }
    break;

  default:
    cout << "Invalid operator!";
    break;
  }

  return 0;
}