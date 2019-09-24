#include <iostream>
#include <algorithm> 

int main()
{
  std::string line;
  int board[8];
  bool valid = true;
  int queenPosL, queenPosR, queenPosP;
  int *p;
  
  for (int i = 0; i < 8; i++)
  {
    std::cin >> line;
    queenPosL = line.find("*");
    queenPosR = line.rfind("*");
    // if there are two queens in the same row
    // or no queen in a row, the board is invalid
    if (queenPosL == std::string::npos || queenPosL != queenPosR)
    {
      valid = false;
    }
    if (i > 0 && valid)
    {
      p = std::find(board, board+i, queenPosL);
      if (p != board + i)
      {
        valid = false;
      }
      if (valid)
      {
        for (int j = 0; j < i; j++)
        {
          if (std::abs(i - j) == std::abs(queenPosL - board[j]))
          {
            valid = false;
            break;
          }
        }
      }

    }
    board[i] = queenPosL;
  }

  if (valid)
  {
    std::cout << "valid" << std::endl;
  }
  else
  {
    std::cout << "invalid" << std::endl;
  }
  return 0;
}