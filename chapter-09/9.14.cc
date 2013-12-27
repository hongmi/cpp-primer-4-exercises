#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin;
using std::cout;

int main()
{
  vector<string> vs;
  string s;
  while (cin >> s) {
    vs.push_back(s);
  }

  vector<string>::iterator i = vs.begin();
  while (i != vs.end()) {
    cout << *i << " ";
    ++i;
  }

  return 0;
}
