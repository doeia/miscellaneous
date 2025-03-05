#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;
int counter = 0;

void increment()
{
  std::lock_guard<std::mutex> lock(mtx); // 自动加锁
  ++counter;
}

int main()
{
  std::thread t1(increment);
  std::thread t2(increment);
  t1.join();
  t2.join();
  std::cout << "Counter: " << counter << std::endl; // 输出 2
  return 0;
}
