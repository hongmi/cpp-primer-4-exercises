#include <string>
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
  string s("hello, Mui!");
  string::iterator i = s.begin();
  while (i != s.end()) {
    *i = toupper(*i);
    ++i;
  }
  cout << s << endl;
  return 0;
}
