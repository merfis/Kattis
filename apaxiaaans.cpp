#include <iostream>

int main()
{
  char c;
  std::cin >> c;

  std::string name(1, c);
  while (std::cin >> c)
  {
    if (c != name.at(name.length() - 1))
    {
      name += c;
    }
  }
  std::cout << name << std::endl;
  return 0;
}