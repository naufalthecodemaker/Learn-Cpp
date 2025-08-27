#include <iostream>

namespace first{
  int x = 1;
}

namespace second{
  int x = 2;
}

int main(){
  using namespace std; // use this so that we dont need to write "std::" again

  using namespace first; // use this so that we dont need prefix for the "first" namespace
  /*
    namespaces = provides a solution for preventing name conflicts
  */

  int x = 0;

  cout << x << "\n"; // x = 0
  
  cout << first::x; // x = 1

  return 0;
}