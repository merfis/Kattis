#include <iostream>

int main()
{
  std::string input;
  std::cin >> input;

  if (input.find("ss") != std::string::npos)
  {
    std::cout << "hiss";
  }
  else
  {
    std::cout << "no hiss";
  }
  std::cout << std::endl;
  return 0;
}