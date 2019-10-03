#include <iostream>

int attacks (const int a, const int b, const int c, const int d, const int w)
{
  int cnt = 0, i = w % (a + b);
  if (i != 0 && i <= a)
  {
    cnt++;
  }
  i = w % (c + d);
  if (i != 0 && i <= c)
  {
    cnt++;
  }
  return cnt;
}

int main()
{
  int a, b, c, d, p, m, g, o;
  std::cin >> a >> b >> c >> d >> p >> m >> g;
  std::string s;

  int workers[3] = {p, m, g};
  for (auto w : workers)
  {
    o = attacks(a, b, c, d, w);
    switch (o)
    {
      case 1:
        s = "one";
        break;
      case 2:
        s = "both"  ;
        break;
      default:
        s = "none";
        break;
    }
    std::cout << s << std::endl;
  }

  return 0;
}