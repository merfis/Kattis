#include <iostream>
#include <map>

int main()
{
  int minute, solved = 0, score = 0;
  char problem;
  std::string result;
  std::map <char, int> wrong;
  std::map <char, int>::iterator it;

  while (true)
  {
    std::cin >> minute;
    if (minute == -1)
    {
      break;
    }
    std::cin >> problem >> result;
    it = wrong.find(problem);
    if (result == "right")
    {
      solved++;
      score += minute;
      if (it != wrong.end())
      {
        score += 20 * it->second;
      }
    }
    else
    {
      if (it == wrong.end())
      {
        wrong[problem] = 1;
      }
      else
      {
        wrong[problem]++;
      }
      
    }
    
  }
  std::cout << solved << " " << score << std::endl;
  return 0;
}