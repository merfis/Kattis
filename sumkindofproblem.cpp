#include <iostream>

int main()
{
  int p, k, n;
  std::cin >> p;
  for (std::size_t i = 0; i < p; i++)
  {
    std::cin >> k >> n;
    std::cout << k << " " << (n * (n + 1)) / 2 << " " << n * n << " " << n * n + n << std::endl;

  }
  return 0;
}