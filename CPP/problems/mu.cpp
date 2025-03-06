#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

int counter = 0;
std::mutex mtx; // 定义一个互斥锁

void safeIncrement(int times)
{
  for (int i = 0; i < times; ++i)
  {
    // 使用 lock_guard 自动加锁和解锁
    std::lock_guard<std::mutex> lock(mtx);
    counter++;
  }
}

int main()
{
  const int numThreads = 5;
  const int incrementsPerThread = 100000;
  std::vector<std::thread> threads;

  for (int i = 0; i < numThreads; ++i)
  {
    threads.emplace_back(safeIncrement, incrementsPerThread);
  }

  for (auto &t : threads)
  {
    t.join();
  }

  std::cout << "最终 counter 值为: " << counter << std::endl;
  return 0;
}
