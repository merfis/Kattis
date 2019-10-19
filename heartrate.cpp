#include <iostream>
#include <iomanip>

int main()
{
  int n, b;
  float p, bpm;

  std::cin >> n;
  for (std::size_t i = 0; i < n; i++)
  {
    std::cin >> b >> p;
    bpm = 60 * b / p;
    std::cout << std::fixed << std::setprecision(10) << std::setfill('0') << bpm - (bpm / b) << " " << bpm << " " << bpm + (bpm / b) << std::endl;
  }
  return 0;
}