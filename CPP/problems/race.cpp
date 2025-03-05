#include <iostream>
#include <thread>

int balance = 1000; // 初始余额

void deposit()
{
  for (int i = 0; i < 1000; ++i)
  {
    balance++; // 存款操作
  }
}

int main()
{
  std::thread t1(deposit); // 线程 1 存款
  std::thread t2(deposit); // 线程 2 存款

  t1.join();
  t2.join();

  std::cout << "Final balance: " << balance << std::endl; // 期望余额为 2000
  return 0;
}
