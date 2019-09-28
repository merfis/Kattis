#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
  std::vector<int> zeros(15);
  std::vector <std::vector<int>> numbers = {{
    {1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1},
    {0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1},
    {1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1},
    {1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1},
    {1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1},
    {1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1},
    {1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1},
    {1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1}
  }};
  std::vector <std::vector<int>> input(20, std::vector<int>(15));

  char line[512];
  int j = 0;
  for (std::size_t i = 0; i < 5; i++)
  {
    j = 0;
    std::cin.getline(line, 512);
    for (auto c : line)
    {
      if (c == '*')
      {
        input[j/4][i*3 + j%4] = 1;
      }
      j++;
    }
  }
  
  bool beer = true;
  std::vector<std::vector<int>>::iterator it;
  std::string code = "";
  for (auto n : input)
  {
    if (n == zeros)
    {
      continue;
    }
    it = std::find(numbers.begin(), numbers.end(), n);
    if (it != numbers.end())
    {
      code.append(std::to_string(std::distance(numbers.begin(), it)));
    }
    else
    {
      beer = false;
      break;
    }
  }


  if (code.empty() || stoi(code) % 6 != 0)
  {
    beer = false;
  }

  if (beer)
  {
    std::cout << "BEER!!" << std::endl;
  }
  else
  {
    std::cout << "BOOM!!" << std::endl;
  }
  
  return 0;
}