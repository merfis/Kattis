#include <iostream>

int main()
{
  int n, x;
  std::cin >> n;
  while (n > 0)
  {
    n--;
    std::cin >> x;
    std::cout << x << " is ";
    if (x % 2 == 0)
    {
      std::cout << "even";
    }
    else
    {
      std::cout << "odd";
    }
    std::cout << std::endl;
  }
  return 0;
}