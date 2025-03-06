#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx1;
std::mutex mtx2;

void threadA()
{
  std::lock_guard<std::mutex> lock1(mtx1);
  // 模拟一些操作
  std::this_thread::sleep_for(std::chrono::milliseconds(100));
  std::lock_guard<std::mutex> lock2(mtx2); // 等待 mtx2
  std::cout << "线程 A 完成操作" << std::endl;
}

void threadB()
{
  std::lock_guard<std::mutex> lock1(mtx2);
  // 模拟一些操作
  std::this_thread::sleep_for(std::chrono::milliseconds(100));
  std::lock_guard<std::mutex> lock2(mtx1); // 等待 mtx1
  std::cout << "线程 B 完成操作" << std::endl;
}

int main()
{
  std::thread tA(threadA);
  std::thread tB(threadB);

  tA.join();
  tB.join();
  return 0;
}
