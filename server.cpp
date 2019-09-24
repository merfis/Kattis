#include <iostream>

int main()
{
  int n, t, taskTime, taskCnt = 0, minutesDone = 0;
  std::cin >> n >> t;

  for (std::size_t i = 0; i < n; i++)
  {
    std::cin >> taskTime;
    minutesDone += taskTime;
    if (minutesDone <= t)
    {
      taskCnt++;
    }
  }
  std::cout << taskCnt << std::endl;
  return 0;
}