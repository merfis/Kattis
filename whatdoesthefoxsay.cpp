#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

int main()
{
  
  std::string s, word;
  std::vector<std::string> input, animal;

  std::getline(std::cin, s);
  int t = std::stoi(s);
  int i = 0;
  while (i < t)
  {
    input.clear();
    std::getline(std::cin, s);
    std::istringstream sstream(s);
    while (sstream >> word)
    {
      input.emplace_back(word);
    }
    while (s != "what does the fox say?")
    {
      animal.clear();
      std::getline(std::cin, s);
      std::istringstream istr(s);
      while (istr >> word)
      {
        animal.emplace_back(word);
      }
      if (animal[1] == "goes")
      {
        input.erase(std::remove(input.begin(), input.end(), animal[2]), input.end());
      }
    }
    for (auto what : input)
    {
      std::cout << what << " ";
    }
    i++;
  }
  std::cout << std::endl;
  return 0;
}