#include <iostream>

int main()
{
  int n, d, k, y = -1;

  std::cin >> n >> d;

  for (int i = 0; i < n; i++)
  {
    std::cin >> k;
    if (y == -1 && k <= d)
    {
      y = i;
    }
  }

  if (y == -1)
  {
    std::cout << "It had never snowed this early!";
  }
  else
  {
    std::cout << "It hadn't snowed this early in " << y << " years!";
  }
  std::cout << std::endl;

  return 0;
}