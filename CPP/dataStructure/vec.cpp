// vector
#include <vector>
#include <string>
#include <iostream>

int main()
{
  std::vector<std::string>
      cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Print vector elements
  for (std::string car : cars)
  {
    std::cout << car << "\n";
  }
  // Get the first element
  std::cout << "front " << cars.front() << "\n";

  // Get the last element
  std::cout << "back " << cars.back() << "\n";

  cars.push_back("Tesla");
  cars.push_back("Mini");
  cars.pop_back();
  std::cout << "size" << cars.size() << "\n";
  return 0;
}
