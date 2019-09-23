#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

int main()
{
  int n, p, total = 0;
  std::cin >> n;
  std::vector<int> prices;

  while (n > 0)
  {
    std::cin >> p;
    prices.emplace_back(p);
    n--;
  }

  std::sort(prices.begin(), prices.end(), std::greater<int>());

  for (int i = 0; i < prices.size(); i++)
  {
    if (i % 3 != 2)
    {
      total += prices[i];
    }
  }

  std::cout << total << std::endl;

  return 0;
}