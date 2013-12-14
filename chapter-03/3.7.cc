#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
  string s1, s2;
  cin >> s1 >> s2;
  if (s1 < s2) {
    cout << "bigger: " << s2;
  } else if (s1 > s2) {
    cout << "bigger: " << s1;
  } else {
    cout << "equal";
  }
  if (s1.size() < s2.size()) {
    cout << "longer: " << s2;
  } else if (s1.size() > s2.size()) {
    cout << "longer: " << s1;
  } else {
    cout << "equal length!";
  }
  cout << endl;

  return 0;
}
