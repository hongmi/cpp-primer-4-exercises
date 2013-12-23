#include <iostream>
#include <bitset>
#include <stdexcept>

int main()
{
  std::bitset<190> b90;
  b90.set(100);
  try {
    unsigned long b90l = b90.to_ulong();
    std::cout << b90l << std::endl;

  } catch (std::overflow_error e) {
    std::cout << e.what() << std::endl;
  }
  return 0;
}
