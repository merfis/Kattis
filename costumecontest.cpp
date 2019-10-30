#include <iostream>
#include <map>
#include <algorithm>

int main()
{
  std::map<std::string, int> costumes;
  int n;
  std::string s;
  std::map<std::string,int>::const_iterator it;

  std::cin >> n;
  for (std::size_t i = 0; i < n; i++)
  {
    std::cin >> s;
    it = costumes.find(s);
    if (it != costumes.end())
    {
      costumes[s] += 1;
    }
    else
    {
      costumes[s] = 1;
    }
    
  }
  auto minCostumes = std::min_element(costumes.begin(), costumes.end(),
    [](const std::map<std::string, int>::value_type & p1, const std::map<std::string, int>::value_type & p2)
    {return p1.second < p2.second; });

  for (auto k : costumes)
  {
    if (k.second == minCostumes->second)
    {
      std::cout << k.first << std::endl;
    }
  }

  return 0;
}