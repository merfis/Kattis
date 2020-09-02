#include <iostream>

int main()
{
  uint start, n1, n2, n3, degrees;

  std::cin >> start >> n1 >> n2 >> n3;

  while (! (start == 0 && n1 == 0 && n2 == 0 && n3 == 0))
  {
    degrees = 720 + // 2 full turns clockwise
      ((start + 40 - n1) % 40) * 9 + // stop at first number
      360 + // 1 full turn counter clockwise
      ((n2 + 40 - n1) % 40) * 9 + // stop at second number counter clockwise
      ((n2 + 40 - n3) % 40) * 9; // turn clockwise until third number is reached
    std::cout << degrees << std::endl;
    std::cin >> start >> n1 >> n2 >> n3;
  }
}