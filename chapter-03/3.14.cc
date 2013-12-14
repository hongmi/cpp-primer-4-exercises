#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
  string word;
  vector<string> words;
  while (cin >> word) {
    words.push_back(word);
  }

  for (vector<string>::size_type i = 0; i != words.size(); ++i) {
    if (i % 8 == 7) {
      cout << endl;
    }
    word = "";
    for (string::size_type si = 0; si != words[i].size(); ++si) {
      word += toupper(words[i][si]);
    }
    cout << word << " ";
  }
  cout << endl;
  return 0;
}
