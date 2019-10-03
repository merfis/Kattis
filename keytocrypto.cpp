#include <iostream>

int main()
{
  std::string m = "", k, c;
  std::cin >> c >> k;
  int ca, ka;

  for (std::size_t i = 0, lc = c.length(), lk = k.length(); i < lc; i++)
  {
    if (i < lk)
    {
      ka = (uint) k.at(i);
    }
    else
    {
      ka = (uint) m.at(i - lk);
    }
    
    ca = (uint) c.at(i);
    m += (ca >= ka) ? (char) (std::abs((ca - ka) % 26) + 65) : (std::abs((ca + 26 - ka) % 26) + 65);
  }
  std::cout << m << std::endl;

  return 0;
}