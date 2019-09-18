#include <iostream>

int digitsSum(int number)
{
  int sum = 0;
  while (number > 0)
  {
    sum += number % 10;
    number /= 10;
  }
  return sum;
}

int main()
{
  int n = -1, p, nSum, prodSum;

  while (true)
  {
    std::cin >> n;
    if (n == 0)
    {
      break;
    }
    nSum = digitsSum(n);
    p = 10;
    while (nSum != digitsSum(++p * n));
    std::cout << p << std::endl;
  }

  return 0;
}