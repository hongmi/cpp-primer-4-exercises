#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
  string s;
  cin >> s;
  string news;
  for (string::size_type i = 0; i != s.size(); ++i) {
    if (!ispunct(s[i])) {
      news += s[i];
    }
  }
  cout << news << endl;
  return 0;
}
