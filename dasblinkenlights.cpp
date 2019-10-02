#include <iostream>

int gcd(int a, int b) { 
   if (b == 0)
   {
      return a; 
   }
   return gcd(b, a % b);  
} 

int main()
{
  int p, q, s;
  std::cin >> p >> q >> s;
  if ((p * q) / gcd(p, q) > s)
  {
    std::cout << "no" << std::endl;
  }
  else
  {
    std::cout << "yes" << std::endl;
  }
  
  return 0;
}