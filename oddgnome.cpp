#include <iostream>

int main()
{
  int n, g, id, pid;
  bool foundKing;
  std::cin >> n;
  for (std::size_t i = 0; i < n; i++)
  {
    std::cin >> g >> id;
    pid = id;
    foundKing = false;
    for (std::size_t j = 2; j <= g; j++)
    {
      std::cin >> id;
      if (pid + 1 != id && !foundKing)
      {
        std::cout << j << std::endl;
        foundKing = true;
      }
      pid = id;
    }
  }
  return 0;
}