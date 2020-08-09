#include <iostream>

int reverseNumber(int);

int main()
{
  int in1, in2, rev1, rev2;
  std::cin >> in1 >> in2;

  rev1 = reverseNumber(in1);
  rev2 = reverseNumber(in2);

  std::cout << ((rev1 > rev2) ? rev1 : rev2) << std::endl;

  return 0;
}

int reverseNumber(int input)
{
  int rev = 0;
  while (input > 0)
  {
    rev = rev * 10 + input % 10;
    input /= 10;
  }
  return rev;
}