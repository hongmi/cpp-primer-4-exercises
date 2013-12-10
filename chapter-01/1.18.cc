// input two numbers, output the all numbers between them

#include <iostream>

int main()
{
  std::cout << "Enter two numbers : " << std::endl;

  int v1, v2;
  std::cin >> v1 >> v2;

  int lower, upper;
  if (v1 <= v2) {
    lower = v1;
    upper = v2;
  } else {
    lower = v2;
    upper = v1;
  }

  for (int i = lower; i <= upper; ++i) {
    std::cout << i << "\t";
  }

  return 0;
}
  
