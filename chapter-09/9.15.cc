#include <iostream>
#include <string>
#include <list>

using std::string;
using std::list;
using std::cin;
using std::cout;

int main()
{
  list<string> vs;
  string s;
  while (cin >> s) {
    vs.push_back(s);
  }

  list<string>::iterator i = vs.begin();
  while (i != vs.end()) {
    cout << *i << " ";
    ++i;
  }

  return 0;
}
