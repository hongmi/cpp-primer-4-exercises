#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main()
{
  pair<string, int> p;
  vector<pair<string, int> > vp;
  while (cin >> p.first >> p.second)
    vp.push_back(p);

  return 0;
}
