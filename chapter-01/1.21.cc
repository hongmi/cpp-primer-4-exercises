#include "Sales_item.h"

int main()
{
  std::cout << "Enter books as sales item:" << std::endl;

  while (true) {
    Sales_item item;
    std::cin >> item;
    std::cout << item << std::endl;
  }

  return 0;
}
