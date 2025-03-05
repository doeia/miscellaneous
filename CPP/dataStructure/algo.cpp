/*
 * Data Structure	Description

  Vector	Stores elements like an array but can dynamically change in size. Adding and removing of elements are usually done at the end. Elements can be accessed by index.

  List	Stores elements sequentially, where each element is connected to the next. Adding and removing of elements can be done at both ends. Not accessible by index.

  Stack	Stores elements in a specific order, called LIFO (Last In, First Out), where elements can only be added and removed from the top. Not accessible by index.

  Queue	Stores elements in a specific order, called FIFO (First In, First Out), where elements are added at the end and removed from the front. Not accessible by index.

  Deque	Stores elements in a double-ended queue, where elements can be added and removed from both ends. Elements can be accessed by index.

  Set	Stores unique elements. Not accessible by index.

  Map	Stores elements in "key/value" pairs. Accessible by keys (not by index).
 */

/*
Iterators are used to access and iterate through elements of data structures (vectors, sets, etc.), by "pointing" to them.

When you are just reading the elements, and don't need to modify them, the for-each loop is much simpler and cleaner than iterators.

However, when you need to add, modify, or remove elements during iteration, iterate in reverse, or skip elements, you should use iterators:
*/

#include <vector>
#include <string>
#include <deque>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  // Create a vector called numbers that will store integers
  vector<int> numbers = {1, 7, 3, 5, 9, 2};

  // Sort numbers numerically
  sort(numbers.begin(), numbers.end());
  for (int num : numbers)
  {
    cout << num << "\n";
  }

  // Create a vector called numbers that will store integers
  vector<int> numbers2 = {1, 7, 3, 5, 9, 2};

  // Sort numbers numerically in reverse order
  sort(numbers2.rbegin(), numbers2.rend());
  for (int num : numbers2)
  {
    cout << num << "\n";
  }

  // Create a vector called numbers that will store integers
  vector<int> numbers3 = {1, 7, 3, 5, 9, 2};

  // Search for the number 3
  auto it = find(numbers3.begin(), numbers3.end(), 3);
  // Check if the number 3 was found
  if (it != numbers3.end())
  {
    cout << "The number 3 was found!" << "\n";
  }
  else
  {
    cout << "The number 3 was not found." << "\n";
  }

  return 0;
}