#include <iostream>

int main()
{
  const int earthOrbit = 365;
  const int marsOrbit = 687;
  std::size_t caseNr = 1;

  int earthDay, marsDay, output;
  std::string line;

  while(std::cin >> earthDay >> marsDay)
  {
    int i = -1;
    while ((marsOrbit * ++i - marsDay + earthDay) % earthOrbit != 0);
    output = marsOrbit * i - marsDay;
      
    std::cout << "Case " << caseNr++ << ": " << output << std::endl;
  }

  return 0;
}