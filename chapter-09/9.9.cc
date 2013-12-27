#include <iostream>
#include <list>

using std::list;

int main()
{

  int ia[] = {0, 1, 2, 3, 4, 5, 6};
  list<int> lst(ia, ia + 5);
  list<int>::reverse_iterator i = lst.rbegin();
  while (i != lst.rend()) {
    std::cout << *i++ << std::endl;
  }
  return 0;
}
