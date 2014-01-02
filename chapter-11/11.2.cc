#include <iostream>
#include <algorithm>
#include <string>
#include <list>

using namespace std;

int main()
{
  string s;
  list<string> ls;
  while (cin >> s)
    ls.push_back(s);

  int cnt = count(ls.begin(), ls.end(), "10");

  cout << "10 input times: " << cnt << endl;
  return 0;
}
