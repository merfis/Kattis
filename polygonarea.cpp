#include <iostream>
#include <iomanip>

int main()
{
  int vertices, x, y;
  double area;
  std::cin >> vertices;

  while (vertices != 0)
  {
    area = 0;
    std::pair<int, int> points[vertices];

    for (std::size_t i = 0; i < vertices; i++)
    {
      std::cin >> x >> y;
      points[i] = std::make_pair(x, y);
    }
    for (std::size_t i = 0; i < vertices - 1; i++)
    {
      area += ((points[i].first * points[i+1].second) - (points[i].second * points[i+1].first));
    }
    area += ((points[vertices-1].first * points[0].second) - (points[vertices-1].second * points[0].first));

    std::cout << std::fixed << std::setprecision(1) <<
      (area > 0 ? "CCW " : "CW ") << std::abs(area / 2) << std::endl;

    std::cin >> vertices;
  }
  return 0;
}