#include <iostream>
#include <vector>

using namespace std;

typedef vector<pair<string, int>> pairlist_t;
// we gave a nickname "pairlist_t" for vector<pair<string, int>>

/*
typedef string text_t; // we gave a nickname "text_t" (text type) for string
typedef int num_t; // we gave a nickname "num_t" (text type) for integer
*/

/*
    typedef = reserved key to create an additonal name 
              that helps with readable and reduces typos

    but typedef is replaced with "using" (work better with templates)
  */

using text_t = string;
using num_t = int;

int main(){
  
  pairlist_t pairlist;

  text_t firstName = "Patrick TheStar";
  num_t age = 20;

  cout << "First Name: " << firstName << endl;
  cout << "Age: " << age << endl;

  return 0;
}