#include <iostream>
#include <math.h>

int main() 
{
  int n, days = 0, printers = 1;
  std::cin >> n;

  if (n < 4)
  {
    days = n;
  }
  else
  {
    while (printers < n)
    {
      days++;
      printers *= 2;
    }
    days++;
  }
  
  std::cout << days << std::endl;
  
  return 0;
}