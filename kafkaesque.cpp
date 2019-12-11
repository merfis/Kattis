#include <iostream>

int main()
{
  int k, s = 1, c, p = 0;
  std::cin >> k;
  for (std::size_t i = 0; i < k; i++)
  {
    std::cin >> c;
    if (c < p)
    {
      s++;
    }
    p = c;
  }
  std::cout << s << std::endl;
  return 0;
}