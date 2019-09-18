#include <iostream>

int main()
{
  std::string jonmarius, doctor;
  std::cin >> jonmarius >> doctor;

  if (jonmarius.length() >= doctor.length())
  {
    std::cout << "go" << std::endl;
  }
  else
  {
    std::cout << "no" << std::endl;
  }
  
  return 0;
}