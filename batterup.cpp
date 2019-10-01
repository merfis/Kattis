#include <iostream>

int main()
{
  int n, r, s = 0, d;
  std::cin >> n;
  d = n;
  for (int i = 0; i < n; i++)
  {
    std::cin >> r;
    if (r == -1)
    {
      d--;
    }
    else
    {
      s += r;
    }
  }
  std::cout << static_cast<float>(s * 1.0f / d) << std::endl;
  return 0;
}