#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using std::string;
using std::cin;
using std::vector;

int main() {
  string temp;
  vector<string> vs;
  while (cin >> temp) {
    vs.push_back(temp);
  }

  char **pArr = new char* [vs.size()];

  char **p = pArr;
  for (vector<string>::iterator i = vs.begin(); i != vs.end(); ++i) {
    *p = new char[(*i).size() + 1];
    strncpy(*p, (*i).c_str(), (*i).size() + 1);
    ++p;
  }
  for (p = pArr; p != pArr + vs.size(); ++p) {
    std::cout << *p << std::endl;
  }
  return 0;
}
