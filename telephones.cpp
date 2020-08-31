#include <iostream>
#include <algorithm>

int main()
{
  ulong n, m, source, destination, start, duration, polStart, polDuration, calls;

  std::cin >> n >> m;
  while (n && m)
  {

    std::pair<ulong, ulong> callLog[n];
    for (ulong i = 0; i < n; i++)
    {
      std::cin >> source >> destination >> start >> duration;
      callLog[i] = std::make_pair(start, start + duration - 1);
    }

    for (ulong i = 0; i < m; i++)
    {
      calls = 0;
      std::cin >> polStart >> polDuration;
      for (ulong j = 0; j < n; j++)
      {
        if (
          (polStart >= callLog[j].first && polStart <= callLog[j].second) ||
          (polStart < callLog[j].first && polStart + polDuration - 1 >= callLog[j].first)
          )
        {
          calls++;
        }
      }
      std::cout << calls << std::endl;

    }
    std::cin >> n >> m;
  }

  return 0;
}