#include <iostream>

int main()
{
  uint e, f, c, n, b, d;

  while(std::cin >> e >> f >> c)
  {
    n = 0;
    b = e + f;
    while (b >= c)
    {
      d = b / c;
      n += d;
      b = b - (d * c) + d;
    }
    std::cout << n << std::endl;

  }

  return 0;
}