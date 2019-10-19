#include <iostream>
#include <math.h>

int main()
{
  int n, w, h, l;
  double maxL;

  std::cin >> n >> w >> h;
  for (std::size_t i = 0; i < n; i++)
  {
    std::cin >> l;
    maxL = std::sqrt(w * w + h * h);
    if (l <= maxL)
    {
      std::cout << "DA" << std::endl;
    }
    else
    {
      std::cout << "NE" << std::endl;
    }
  }
  
  return 0;
}