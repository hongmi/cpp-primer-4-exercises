#include <string>
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
  string s("hello, Mui!");
  string::iterator i = s.begin();
  while (i != s.end()) {
    if (isupper(*i))
      i = s.erase(i);
    else
      ++i;
  }
  cout << s << endl;
  return 0;
}
