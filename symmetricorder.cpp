#include <iostream>
#include <vector>

int main()
{
  int set = 1, n = -1;
  std::string name;
  std::vector <std::string> names;
  while (n != 0)
  {
    std::cin >> n;
    if (n == 0)
    {
      break;
    }
    std::cout << "SET " << set++ << std::endl;
    names.erase(names.begin(), names.end());
    for (std::size_t i = 0; i < n; i++)
    {
      std::cin >> name;
      if (i % 2 == 0)
      {
        std::cout << name << std::endl;
      }
      else
      {
        names.emplace(names.begin(), name);
      }
    }
    for (auto item: names)
    {
      std::cout << item << std::endl;
    }
  }
  return 0;
}