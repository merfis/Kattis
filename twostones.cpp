#include <iostream>

int main() 
{
  int n;
  std::cin >> n;

  if (n % 2 == 1)
  {
    std::cout << "Alice" << std::endl;
  }
  else
  {
    std::cout << "Bob" << std::endl;
  }
  
  return 0;
}