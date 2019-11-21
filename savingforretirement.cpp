#include <iostream>
#include <math.h>

int main()
{
  int b, br, bs, a, ar, as;
  std::cin >> b >> br >> bs >> a >> as;

  bs = (br - b) * bs;
  ar = std::ceil(( bs * 1.0f / as) + a);
  if ((ar - a) * as == bs)
  {
    ar++;
  }

  std::cout << ar << std::endl;

  return 0;
}