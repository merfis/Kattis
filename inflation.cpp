#include <iostream>
#include <algorithm>

int main()
{
  int n, c;
  std::cin >> n;
  int canisters[n];

  for (std::size_t i = 0; i < n; i++)
  {
    std::cin >> c;
    canisters[i] = c;
  }

  std::sort(canisters, canisters + n);
  bool impossible = false;
  float fr, f = 1.0f;
  for (std::size_t i = 0; i < n; i++)
  {
    if (i + 1 < canisters[i])
    {
      impossible = true;
      break;
    }

    fr = canisters[i] * 1.0f / (i + 1);
    if (fr < f)
    {
      f = fr;
    }
  }
  if (impossible)
  {
    std::cout << "impossible" << std::endl;
  }
  else
  {
    std::cout << f << std::endl;
  }

  return 0;
}