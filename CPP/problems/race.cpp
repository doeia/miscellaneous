#include <iostream>
#include <thread>
#include <vector>

int counter = 0;

void increment(int times)
{
  for (int i = 0; i < times; ++i)
  {
    counter++; // 非原子操作，可能产生数据竞争
  }
}

int main()
{
  const int numThreads = 5;
  const int incrementsPerThread = 100000;
  std::vector<std::thread> threads;

  // 创建多个线程进行累加操作
  for (int i = 0; i < numThreads; ++i)
  {
    threads.emplace_back(increment, incrementsPerThread);
  }

  for (auto &t : threads)
  {
    t.join();
  }

  std::cout << "最终 counter 值为: " << counter << std::endl;
  return 0;
}
