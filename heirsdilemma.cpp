#include <iostream>
#include <set>

bool validComb(int);

int main()
{
  int l, h, out = 0;
  std::cin >> l >> h;

  for (int i = l; i <= h; i++)
  {
    if (validComb(i))
    {
      out++;
    }
  }

  std::cout << out << std::endl;

  return 0;
}

bool validComb(int nr)
{
  std::set<int> digits;
  int rest, n = nr;
  while (n > 0)
  {
    rest = n % 10;
    if (rest == 0) 
    {
      return false;
    }
    n /= 10;
    digits.emplace(rest);
  }
  if (digits.size() != 6)
  {
    return false;
  }
  for (auto i : digits)
  {
    if (nr % i != 0)
    {
      return false;
    }
  }
  return true;
}
