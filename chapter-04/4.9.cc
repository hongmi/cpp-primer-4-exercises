#include <cstddef>


int main()
{
  const int array_size = 10;
  int a[array_size];
  for (size_t i = 0; i != array_size; ++i) {
    a[i] = i;
  }
}
