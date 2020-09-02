#include <iostream>
#include <iomanip>

int main()
{
  uint n;
  double t, prize, stopWin, breakEven;

  std::cin >> n >> t;
  while (n && t)
  {
    prize = (double) (1 << n);
    for (uint i = 1; i <= n; ++i)
    {
      stopWin = (double) (1 << (n - i));
      breakEven = stopWin / prize;
      if (breakEven < t)
      {
        breakEven = t;
        stopWin = 0;
      }
      else
      {
        stopWin *= (breakEven - t);
      }
      prize *= (0.5 - (breakEven * breakEven / 2));
      prize = (prize + stopWin) * (1 / (1 - t));

    }
    std::cout << std::fixed << std::setprecision(3) <<
      prize << std::endl;

    std::cin >> n >> t;
  }
  return 0;
}
