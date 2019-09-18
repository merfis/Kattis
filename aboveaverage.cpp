#include <iostream>
#include <iomanip>

int main()
{
  int c, n, sum, aboveAvg;
  float avg;

  std::cin >> c;
  for (int i = 0; i < c; i++)
  {
    std::cin >> n;
    int grades[n];
    sum = 0;
    aboveAvg = 0;
    for (int j = 0; j < n; j++)
    {
      std::cin >> grades[j];
      sum += grades[j];
    }
    avg = sum / n;
    for (int j = 0; j < n; j++)
    {
      if (grades[j] > avg) 
      {
        aboveAvg++;
      }
    }
    std::cout << std::fixed << std::setprecision(3) 
          << std::setfill('0') << aboveAvg * 100.0f / n  << "%" << std::endl;
  }

  return 0;
}