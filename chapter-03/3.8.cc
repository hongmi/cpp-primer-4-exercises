#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
  string s, ss;
  cin >> s;
  ss += s;
  while (cin >> s) {
    ss += " " + s;
  }
  cout << s << endl;
  return 0;
}
