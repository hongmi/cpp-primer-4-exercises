//input several numbers, output the number of negative numbers.

#include <iostream>

int main()
{
  std::cout << "Enter the number of numbers: " << std::endl;

  int n;
  std::cin >> n;
  int v;
  int sum = 0; 
  for (int i = 1; i <= n; ++i) {
    std::cin >> v;
    if (v < 0) {
      ++sum;
    }
  }

  std::cout << "the number of negative is : " << sum << std::endl;

  return 0;
}
