#include <iostream>

int main()
{
  int n;
  std::cin >> n;

  float q, y, qualy = 0;

  for (int i = 1; i <= n; i++)
  {
    std::cin >> q >> y;
    qualy += q * y;
  }
  std::cout << qualy << std::endl;
  return 0;
}