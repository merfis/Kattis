#include <iostream>
#include <map>

int main()
{
  int n, sum = 0;
  char b, c, s;
  std::map<char, std::array<int, 2>> values = {
    {'A', std::array<int, 2>{11, 11}}, 
    {'K', std::array<int, 2>{4, 4}}, 
    {'Q', std::array<int, 2>{3, 3}}, 
    {'J', std::array<int, 2>{20, 2}}, 
    {'T', std::array<int, 2>{10, 10}}, 
    {'9', std::array<int, 2>{14, 0}}, 
    {'8', std::array<int, 2>{0, 0}}, 
    {'7', std::array<int, 2>{0, 0}}
  };

  std::cin >> n >> b;

  for (std::size_t i = 0, cards = n * 4; i < cards; i++)
  {
    std::cin >> c >> s;
    sum += (s == b) ? values[c][0] : values[c][1];
  }
  std::cout << sum << std::endl;
}