#include <iostream>
#include <iomanip>
#include <map>
#include <queue>

// TODO: use queue?
int main()
{
  int t, r, p, d;
  std::queue<std::map <std::string, std::pair<double, double>>> ingredients;
  std::string s;
  double weight, percent, scaled, bakerWeight;

  std::cin >> t;
  for (std::size_t i = 1; i <= t; i++)
  {
    std::cin >> r >> p >> d;
    scaled = d * 1.0f / p;
    bakerWeight = 0.0;
    for (std::size_t j = 0; j < r; j++)
    {
      std::cin >> s >> weight >> percent;
      ingredients.emplace(std::map<std::string, std::pair<double, double>>{{s, std::make_pair(weight, percent)}});
      if (percent == 100)
      {
        bakerWeight = weight * scaled;
      }
    }
    std::cout << "Recipe # " << i << std::endl;
    while (!ingredients.empty())
    {
      auto a = ingredients.front();
      for (auto &x: a)
      {
        std::cout << x.first << " " << std::fixed << std::setprecision(1) << bakerWeight * x.second.second / 100.f << std::endl;
      }
      ingredients.pop();
    }
    std::cout << std::string(40, '-') << std::endl;
  }
  return 0;
}