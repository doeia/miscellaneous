#include <iostream>
#include <thread>
#include <chrono>

void work()
{
  std::this_thread::sleep_for(std::chrono::seconds(2));
  std::cout << "Thread finished execution.\n";
}

int main()
{
  std::thread t(work); // 创建线程 t

  t.detach(); // 让 t 独立运行（主线程不等待它）

  std::cout << "Main thread finishes, detached thread continues.\n";
  return 0;
}
