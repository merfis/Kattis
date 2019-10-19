#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int n, m, t = 1;
  std::cin >> n >> m;
  std::string line;
  std::vector<std::vector<int>> moves(m, std::vector<int>(n));
  for (std::size_t i = 0; i < n; i++)
  {
    std::cin >> line;
    for (std::size_t j = 0, lineL = line.length(); j < lineL; j++)
    {
      if (line[j] == '_') 
      {
        moves[j][i] = 1;
      }
    }
  }
  std::vector<int>::iterator it;
  for (std::size_t j = 0; j < m; j++)
  {
    it = std::find(moves[j].begin(), moves[j].end(), 0);
    if (it == moves[j].end())
    {
      t++;
    }
  }
  std::cout << t << std::endl;

  return 0;
}