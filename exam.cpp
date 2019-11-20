#include <iostream>
#include <algorithm>

int main()
{
  int n, l, common = 0;
  std::string a1, a2;

  std::cin >> n >> a1 >> a2;
  l = a1.length();

  for (std::size_t i = 0; i < l; i++)
  {
    if (a1[i] == a2[i])
    {
      common++;
    }
  }
  int diff = l - common;
  int x = std::min(l - n, diff);

  std::cout << common + 2 * x - l + n << std::endl;

  return 0;
}