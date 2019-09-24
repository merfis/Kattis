#include <iostream>

int main()
{
  int n, i = 1;
  std::string word;
  bool fishy = false;

  std::cin >> n;
  while (n > 0)
  {
    std::cin >> word;
    if (word != "mumble" && std::stoi(word) != i)
    {
      fishy = true;
    }
    n--;
    i++;
  }
  if (fishy)
  {
    std::cout << "something is fishy" << std::endl;
  }
  else
  {
    std::cout << "makes sense" << std::endl;
  }

  return 0;
}