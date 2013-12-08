#include <iostream>

int main()
{
  int sum = 0;

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
  

  for (int i = lower; i <= upper; ++i)
    sum += i;

  std::cout << "for " << v1 << " -> " << v1 << " : " << sum << std::endl;

  sum = 0;
  int i = 50;
  while (i <= 100) {
    sum += i;
    ++i;
  }
  std::cout << "while 50 -> 100 : " << sum << std::endl;
  return 0;
}
