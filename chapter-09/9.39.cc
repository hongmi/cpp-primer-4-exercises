#include <iostream>
#include <string>

using namespace std;

int main()
{
  string sentence = "Our teacher is very fussy about punctuation. Our teacher has a bee in his bonnet about punctuation.";

  int count = 0;
  vector<string> max;
  string::size_type pos = 0;
  //find " \t\n" to split word
  while ((pos = sentence.find_first_of(" \t\n", pos)) != string::npos) {
    
    //remove punctuation in word
    string::size_type p = sentence.find_first_of(" \t\n", pos + 1);
    if (p != string::npos) {
      //remove punct
      ++count;
      //append to max vector
      //compare with max[0], if larger than it, clear max and set max[0] with it, else push_back to max;
    }
    //count word and find max min

    ++pos;



  }
  return 0;
}
