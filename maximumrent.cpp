#include <iostream>

int main()
{
  int a, b, m, sigma;
  std::cin >> a >> b >> m >> sigma;

  if (a > b)
  {
    std::cout << a * (m - 1) + b << std::endl;
  }
  else
  {
    int x = 1;
    int y = m - 1;
    while (2 * x + y < sigma)
    {
      x++;
      y--;
    }
    std::cout << a * x + b * y << std::endl;
  }

  return 0;
}