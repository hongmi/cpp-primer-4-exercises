#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[])
{
  int sum;
  for (int i = 1; i < argc; ++i) {
    sum += atoi(argv[i]);
  }
  std::cout << sum << std::endl;
  return 0;

}
