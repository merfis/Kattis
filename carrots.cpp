#include <iostream>

int main()
{
  int n, p;
  std::string s;

  std::cin >> n >> p;
  for (std::size_t i = 0; i < n; i++)
  {
    std::cin >> s;
  }
  std::cout << p << std::endl;
}