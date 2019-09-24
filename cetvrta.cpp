#include <iostream>

int main()
{
  int p1x, p1y, p2x, p2y, p3x, p3y, p4x, p4y;
  std::cin >> p1x >> p1y >> p2x >> p2y >> p3x >> p3y;

  if (p1x == p2x)
  {
    p4x = p3x;
  }
  else if (p1x == p3x)
  {
    p4x = p2x;
  }
  else
  {
    p4x = p1x;
  }

  if (p1y == p2y)
  {
    p4y = p3y;
  }
  else if (p1y == p3y)
  {
    p4y = p2y;
  }
  else
  {
    p4y = p1y;
  }

  std::cout << p4x << " " << p4y << std::endl;
  
  return 0;
}