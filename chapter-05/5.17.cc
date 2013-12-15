#include <vector>
#include <iostream>


int main()
{
  std::vector<int> vi;
  std::vector<int>::iterator i = vi.begin();
  while (++i != vi.end()) {
    std::cout << *i << std::endl;
  }
  return 0;
}
