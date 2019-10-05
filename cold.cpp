#include <iostream>

int main()
{
  int n, t, sum = 0;
  std::cin >> n;
  for (std::size_t i = 0; i < n; i++)
  {
    std::cin >> t;
    if (t < 0)
    {
      sum++;
    }
  }
  std::cout << sum << std::endl;
  return 0;
}