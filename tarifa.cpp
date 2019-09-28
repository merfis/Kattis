#include <iostream>

int main()
{
  int x, n, p, s = 0;

  std::cin >> x >> n;
  for (std::size_t i = 0; i < n; i++)
  {
    std::cin >> p;
    s += p;
  }

  std::cout << x * (n + 1) - s << std::endl;
  return 0;
}