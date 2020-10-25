#include <iostream>

int main()
{
  int r, c, zr, zc;

  std::cin >> r >> c >> zr >> zc;
  char articles[c];

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      std::cin >> articles[j];
    }
    for (int k = 0; k < zr; k++)
    {
      for (int j = 0; j < c; j++)
      {
        for (int l = 0; l < zc; l++)
        {
          std::cout << articles[j];
        }
      }
      std::cout << std::endl;
    }
  }
  return 0;

}