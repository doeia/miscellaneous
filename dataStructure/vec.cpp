// vector
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main()
{
  vector<string>
      cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Print vector elements
  for (string car : cars)
  {
    cout << car << "\n";
  }
  // Get the first element
  cout << "front " << cars.front() << "\n";

  // Get the last element
  cout << "back " << cars.back() << "\n";

  cars.push_back("Tesla");
  cars.push_back("Mini");
  cars.pop_back();
  cout << "size" << cars.size() << "\n";
  return 0;
}
