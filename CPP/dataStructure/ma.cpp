// map
#include <map>
#include <string>
#include <iostream>

int main()
{
  std::map<std::string, int> people = {{"John", 32}, {"Adele", 45}, {"Bo", 29}};

  // Get the value associated with the key "John"
  std::cout << "John is: " << people["John"] << "\n";

  // Get the value associated with the key "Adele"
  std::cout << "Adele is: " << people["Adele"] << "\n";

  // Trying to add two elements with equal keys
  people.insert({"Jenny", 22});
  people.insert({"Jenny", 30});

  // Remove an element by key
  people.erase("John");

  for (auto person : people)
  {
    std::cout << person.first << " is: " << person.second << "\n";
  }

  return 0;
}