#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
  char ca[] = "Hello, how are you?";
  vector<char> vc(ca, ca + 5);
  string s(vc.begin(), vc.end());
  string s1(ca, ca + 2);
  cout << s << "and " << s1;
  return 0;
}
