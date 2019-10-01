#include <iostream>
#include <vector>

int main()
{
  std::string input;
  std::vector<int> blimps;
  const std::string fbi = "FBI";

  for (int i = 1; i < 6; i++)
  {
    std::cin >> input;
    if (input.find(fbi) != std::string::npos)
    {
      blimps.emplace_back(i);
    }
  }

  int s = blimps.size();

  if (s > 0)
  {
    for (int i = 0; i < s; i++ )
    {
      std::cout << blimps[i];
      if (i != s - 1)
      {
        std::cout << " ";
      }
    }
  }
  else
  {
    std::cout << "HE GOT AWAY!";
  }
  std::cout << std::endl;
  
  return 0;
}