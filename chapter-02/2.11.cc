#include <iostream>

int main(int argc, char *argv[])
{
  std::cout << "Enter base and exponent: " << std::endl;
  int base, exponent;
  std::cin >> base >> exponent;

  int r = 1;
  for (int i = 0; i < exponent; ++i) {
    r *= base;
  }
  std::cout << "result: " << r << std::endl;
  return 0;
}
