#include <iostream>
#include <iomanip>

int main()
{
  int c, r;
  std::cin >> r >> c;
  std::cout << std::setprecision(10) << static_cast<float>((r - c) * (r - c)  * 100.0f / r / r) << std::endl;
  return 0;
}