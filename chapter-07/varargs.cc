#include <iostream>
#include <cstdarg>

void pint(int last, ...)
{
  va_list vl;

  va_start(vl, last);

  for (int i = 0; i < last; ++i) {
    std::cout << va_arg(vl, int);
  }
  va_end(vl);
}

int main()
{
  pint(2, 23, 4);
  return 0;
}
