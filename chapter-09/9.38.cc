#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s("ab2c3d7R4E6");
  string numberics("0123456789");
  string::size_type pos = 0;
  while ((pos = s.find_first_of(numberics, pos)) != string::npos) {
    cout << "find a number : " << s[pos] << endl;
    ++pos;
  }
  return 0;
}

