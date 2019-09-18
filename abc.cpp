#include <iostream>

void swap(int &n1, int &n2)
{
  n1 = n1 + n2;
  n2 = n1 - n2;
  n1 = n1 - n2;
}

int main()
{
  int a, b, c;
  std::string abc;

  std::cin >> a >> b >> c >> abc;

  if (a > b)
  {
    swap(a, b);
  }

  if (b > c)
  {
    swap(b, c);
  }

  if (a > b)
  {
    swap(a, b);
  }

  if (abc == "ABC")
  {
    std::cout << a << " " << b << " " << c << std::endl;
  }
  else if (abc == "ACB")
  {
    std::cout << a << " " << c << " " << b << std::endl;
  }
  else if (abc == "BAC")
  {
    std::cout << b << " " << a << " " << c << std::endl;
  }
  else if (abc == "BCA")
  {
    std::cout << b << " " << c << " " << a << std::endl;
  }
  else if (abc == "CAB")
  {
    std::cout << c << " " << a << " " << b << std::endl;
  }
  else
  {
    std::cout << c << " " << b << " " << a << std::endl;
  }

  

  return 0;
}