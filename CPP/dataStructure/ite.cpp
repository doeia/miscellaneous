/*
Iterators are used to access and iterate through elements of data structures (vectors, sets, etc.), by "pointing" to them.

When you are just reading the elements, and don't need to modify them, the for-each loop is much simpler and cleaner than iterators.

However, when you need to add, modify, or remove elements during iteration, iterate in reverse, or skip elements, you should use iterators:
*/

#include <vector>
#include <string>
#include <deque>
#include <iostream>
using namespace std;

int main()
{

  // Create a vector called cars that will store strings
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Create a vector iterator called it
  // before version 11, use vector<string>::iterator it;

  // Loop through the vector with the iterator
  for (auto it = cars.begin(); it != cars.end(); ++it)
  {
    cout << *it << "\n";
  }

  // Create a deque called cars that will store strings
  deque<string> cars2 = {"Volvo", "BMW", "Ford", "Mazda"};

  // Loop through the deque with an iterator
  for (auto it = cars2.begin(); it != cars2.end(); ++it)
  {
    cout << *it << "\n";
  }

  return 0;
}