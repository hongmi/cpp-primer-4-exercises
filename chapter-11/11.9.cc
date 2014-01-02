#include <iostream>
#include <string>
#include <list>
#include <fstream>


using namespace std;


bool GTE4(const string & s)
{
  return s.size() <= 4;
}

int main(int argc, char * argv[])
{
  ifstream in(__FILE__);
  list<string> words;
  string word;
  while (cin >> word) {
    words.push_back(word);
  }

  sort(word.begin(), words.end());

  list<string>::iterator end_unique = unique(words.begin(), words.end());
  words.erase(end_unique, words.end());

  list<string>::size_type wc = count_if(words.begin(), words.end(), GTE4);

  cout << "the element not less than 4 is : " << wc << endl;

  //... iterate to output elements

  return 0;
}
