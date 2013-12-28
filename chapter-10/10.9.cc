#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
  string word;
  map<string, unsigned> freq;
  while (cin >> word) {
    ++freq[word];
  }

  map<string, unsigned>::iterator i = freq.begin();
  while (i != freq.end()) {
    cout << i->first << "\t\t" << i->second << endl;
    ++i;
  }
  return 0;
}
