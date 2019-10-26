#include <iostream>

int main ()
{
  int n, m, s1, s2;
  std::cin >> n >> m;
  if (n >= m)
  {
    s1 = m + 1;
    s2 = n + 1;
  }
  else
  {
    s1 = n + 1;
    s2 = m + 1;
  }
  
  for (int i = s1; i <= s2; i++)
  {
    std::cout << i << std::endl;
  }
  return 0;
}