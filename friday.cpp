#include <iostream>

int main()
{
  int t, d, m, dm, friday13, monthStart;
  std::cin >> t;
  for (std::size_t i = 0; i < t; i++)
  {
    friday13 = 0;
    monthStart = 0;
    std::cin >> d >> m;
    for (std::size_t j = 0; j < m; j++)
    {
      std::cin >> dm;
      if (dm >= 13 && (monthStart + 13) % 7 == 6) 
      {
        friday13++;
      }
      monthStart += dm;
    }
    std::cout << friday13 << std::endl;

  }
  return 0;
}