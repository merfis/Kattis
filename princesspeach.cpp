#include <iostream>
#include <set>

int main()
{
  int n, y, obst;
  std::cin >> n >> y;
  std::set<int> obstacles;
  for (std::size_t i = 0; i < y; i++)
  {
    std::cin >> obst;
    obstacles.emplace(obst);
  }
  y = obstacles.size();

  for (std::size_t i = 0; i < n; i++)
  {
    if (obstacles.count(i) == 0)
    {
      std::cout << i << std::endl;
    }
  }
  std::cout << "Mario got " << y << " of the dangerous obstacles." << std::endl;

  return 0;
}