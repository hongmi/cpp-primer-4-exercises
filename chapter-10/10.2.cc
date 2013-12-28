#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main()
{
  
  vector<pair<string, int> > vp;
  //this method is simple and brief
  pair<string, int> p;
  while (cin >> p.first >> p.second)
    vp.push_back(p);

  string s;
  int i;
  while (cin >> s >> i)
    vp.push_back(make_pair(s, i));

  string s;
  int i;
  while (cin >> s >> i) {
    pair<string, int> p(s, i);
    vp.push_back(p);
  }
  

  return 0;
}
