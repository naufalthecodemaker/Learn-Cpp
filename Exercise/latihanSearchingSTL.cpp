#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(){
  // membuat list bernama nums dengan tipe integer
  list<int> nums = {14, 21, 11, 30, 10};

  // deklarasi variable a sebagai key
  int a = 21;

  // menyimpan iterator hasil pencarian, 
  // jika key ketemu, iterator nunjuk ke key
  // jika ngga ketemu, iterator == nums.end
  auto iterator = find(nums.begin(), nums.end(), a);

  // kalau key ketemu, outputnya Yes
  if(iterator != nums.end())
    cout << "Yes\n";
  // kalau key ga ketemu, outputnya No
  else
    cout << "No\n";
    
  return 0;
}