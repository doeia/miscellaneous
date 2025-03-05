#include <iostream>

struct Person
{
  std::string name;
  int age;
};

int main()
{
  // 使用 . 访问成员
  Person p1;
  p1.name = "Alice";
  p1.age = 30;
  std::cout << "Name: " << p1.name << ", Age: " << p1.age << std::endl;

  // 使用 -> 访问成员
  Person *p2 = new Person;
  p2->name = "Bob";
  p2->age = 25;
  std::cout << "Name: " << p2->name << ", Age: " << p2->age << std::endl;

  delete p2;
  return 0;
}
