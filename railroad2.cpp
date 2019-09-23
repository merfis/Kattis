#include <iostream>

int main()
{
  int x, y;
  std::cin >> x >> y;

  if ((x * 2 + y) % 2 == 0)
  {
    std::cout << "possible" << std::endl;
  }
  else
  {
    std::cout << "impossible" << std::endl;
  }

  return 0;
}