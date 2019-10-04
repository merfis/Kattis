#include <iostream>

int main()
{
  int p, t, solved = 0;
  std::cin >> p >> t;
  std::string s;
  bool ok;
  std::size_t found;
  for (std::size_t ip = 0; ip < p; ip++)
  {
    ok = true;
    for (std::size_t it = 0; it < t; it++ )
    {
      std::cin >> s;
      found = s.find_last_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
      if (found != 0 && found != std::string::npos)
      {
        ok = false;
      }
    }
    if (ok)
    {
      solved++;
    }
  }

  std::cout << solved << std::endl;

  return 0;
}