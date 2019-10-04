#include <iostream>
#include <vector>

int main()
{
  int n, a;
  std::vector<int> gis;
  std::cin >> n >> a;
  gis.emplace_back(a);
  while (std::cin >> a)
  {
    if (a > gis.at(gis.size() - 1))
    {
      gis.emplace_back(a);
    }
  }

  std::cout << gis.size() << std::endl;
  for (std::size_t i = 0, l = gis.size(); i < l; i++)
  {
    std::cout << gis[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}