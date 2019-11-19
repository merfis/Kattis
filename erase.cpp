#include <iostream>

int main()
{
  int n;
  std::string before, after, result = "succeeded";

  std::cin >> n >> before >> after;

  if (before.length() != after.length())
  {
    result = "failed";
  }
  else
  {
    for (std::size_t i = 0, l = before.length(); i < l; i++)
    {
      if ( (n % 2 == 0 && before[i] != after[i]) || (n % 2 == 1 && before[i] == after[i]) )
      {
        result = "failed";
      }
    }
  }
  std::cout << "Deletion " << result << std::endl;

  return 0;
}