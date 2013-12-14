#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char *argv[])
{
  cout << "Enter base and exponent: " << endl;
  int base, exponent;
  cin >> base >> exponent;

  int r = 1;
  for (int i = 0; i < exponent; ++i) {
    r *= base;
  }
  cout << "result: " << r << endl;
  return 0;
}
