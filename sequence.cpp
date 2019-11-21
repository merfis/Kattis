#include <iostream>
#include <math.h>

int main()
{
  long n;
  std::cin >> n;

  std::cout << (long) std::ceil(std::log2l(n)) << std::endl;

  for (std::size_t i = 1; i < n; i = i * 2)
  {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  return 0;
}