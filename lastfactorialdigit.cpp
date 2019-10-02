#include <iostream>

int main()
{
  int n, a, last;
  std::cin >> n;
  for (std::size_t i = 0; i < n; i++)
  {
    std::cin >> a;
    switch (a)
    {
    case 0:
    case 1:
      last = 1;
      break;
    case 2:
      last = 2;
      break;
    case 3:
      last = 6;
      break;
    case 4:
      last = 4;
      break;
    default:
      last = 0;
      break;
    }
    std::cout << last << std::endl;

  }
  return 0;
}