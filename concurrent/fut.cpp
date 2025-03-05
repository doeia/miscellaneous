#include <iostream>
#include <future>
#include <thread>

int square(int x)
{
  std::cout << "Inside async task" << std::endl;
  return x * x;
}

int main()
{
  std::cout << "Starting async task" << std::endl;
  std::future<int> result = std::async(std::launch::async, square, 5);
  std::cout << "Async task started" << std::endl;
  std::cout << "before re: " << std::endl;
  std::cout << "Result: " << result.get() << std::endl; // 获取异步结果
  std::cout << "After getting result" << std::endl;
  return 0;
}