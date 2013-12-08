#include <iostream>

int main()
{
  int sum = 0;
  for (int i = 50; i <= 100; ++i)
    sum += i;

  std::cout << "for 50 -> 100 : " << sum << std::endl;

  sum = 0;
  int i = 50;
  while (i <= 100) {
    sum += i;
    ++i;
  }
  std::cout << "while 50 -> 100 : " << sum << std::endl;
  return 0;
}
