#include <iostream>
#include <numeric>

int main()
{
  uint n, r1, r, g;
  std::cin >> n >> r1;
  for (uint i = 1; i < n; i++)
  {
    std::cin >> r;
    g = std::gcd(r1, r);
    std::cout << (r1 / g) << "/" << (r / g) << std::endl;
  }
  return 0;
}