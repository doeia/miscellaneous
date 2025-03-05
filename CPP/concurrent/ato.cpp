#include <iostream>
#include <atomic>
#include <thread>

std::atomic<int> counter(0);

void increment()
{
  for (int i = 0; i < 100000000; ++i)
  {
    counter++; // 这是原子操作
  }
}

int main()
{
  std::thread t1(increment);
  std::thread t2(increment);
  std::thread t3(increment);
  std::thread t4(increment);

  t1.join();
  t2.join();
  t3.join();
  t4.join();

  std::cout << "Counter: " << counter.load() << std::endl; // 保证输出正确结果
  return 0;
}
