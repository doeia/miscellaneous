#include <iostream>
#include <thread>
#include <atomic>

std::atomic<int> balance(1000); // 使用 atomic 类型保证原子性

void deposit()
{
  for (int i = 0; i < 1000; ++i)
  {
    // 使用 fetch_add(1) 保证每次修改是原子操作
    balance.fetch_add(1, std::memory_order_relaxed); // 加上 relaxed，避免过度同步
  }
}

int main()
{
  std::thread t1(deposit);
  std::thread t2(deposit);

  t1.join();
  t2.join();

  std::cout << "Final balance: " << balance.load(std::memory_order_relaxed) << std::endl; // 期望余额为 2000
  return 0;
}
