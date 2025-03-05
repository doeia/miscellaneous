#include <iostream>
#include <thread>
#include <mutex>

int balance = 1000; // 初始余额
std::mutex mtx;     // 互斥锁

void deposit()
{
  for (int i = 0; i < 1000; ++i)
  {
    std::lock_guard<std::mutex> lock(mtx); // 自动加锁，保证线程安全
    balance++;                             // 存款操作
  }
}

int main()
{
  std::thread t1(deposit);
  std::thread t2(deposit);

  t1.join();
  t2.join();

  std::cout << "Final balance: " << balance << std::endl; // 期望余额为 2000
  return 0;
}
