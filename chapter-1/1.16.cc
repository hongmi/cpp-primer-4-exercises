//output the larger of two number

#include <iostream>

int main()
{
  std::cout << "Enter two numbers : " << std::endl;
  int v1, v2;
  std::cin >> v1 >> v2;

  int max;
  if (v1 <= v2) {
    max = v2;
  } else {
    max = v1;
  }

  std::cout << "the max number is " << max << std::endl;

  return 0;
}
