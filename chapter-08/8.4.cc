#include <iostream>
#include <string>

std::istream & r(std::istream &in)
{
  std::string s;
  while (in >> s, !in.eof()) {
    std::cout << s;
  }
  in.clear();
  return in;
}

int main()
{
  std::string p;
  r(std::cin) >> p;
  std::cout << "p is: " << p << std::endl;
  return 0;
}
