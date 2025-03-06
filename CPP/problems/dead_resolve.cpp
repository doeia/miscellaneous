#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx1;
std::mutex mtx2;

void threadA_safe()
{
  // 一次性锁住两个 mutex
  std::lock(mtx1, mtx2);
  std::lock_guard<std::mutex> lock1(mtx1, std::adopt_lock);
  std::lock_guard<std::mutex> lock2(mtx2, std::adopt_lock);

  std::cout << "线程 A 完成操作（安全版）" << std::endl;
}

void threadB_safe()
{
  // 同样一次性锁住两个 mutex
  std::lock(mtx1, mtx2);
  std::lock_guard<std::mutex> lock1(mtx1, std::adopt_lock);
  std::lock_guard<std::mutex> lock2(mtx2, std::adopt_lock);

  std::cout << "线程 B 完成操作（安全版）" << std::endl;
}

int main()
{
  std::thread tA(threadA_safe);
  std::thread tB(threadB_safe);

  tA.join();
  tB.join();
  return 0;
}
