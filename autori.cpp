#include <iostream>

int main()
{
  std::string input;
  std::cin >> input;
  std::string autori = input.substr(0, 1);
  std::size_t dash = 1, rdash = input.rfind("-");

  while (dash != std::string::npos && rdash != std::string::npos && dash < rdash)
  {
    dash = input.find("-", dash);
    autori.append(input.substr(++dash, 1));
  }

  std::cout << autori << std::endl;
  return 0;
}