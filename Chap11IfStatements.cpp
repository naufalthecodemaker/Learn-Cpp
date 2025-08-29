#include <iostream>
using namespace std;

int main(){
  
  int age;

  cout << "Enter your age: ";
  cin >> age;

  if(age >= 100){
    cout << "You're too old to enter!";
  } else if(age < 0){
    cout << "You haven't born yet!";
  } else if(age >= 18){
    cout << "You can enter!";
  } else{
    cout << "You are not old enough to enter!";
  } 

  return 0;
}