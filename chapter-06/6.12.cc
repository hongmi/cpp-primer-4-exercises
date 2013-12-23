#include <iostream>
#include <string>

using namespace std;

int main()
{
  string last;
  int lastCnt = 0;
  string word;
  int maxCnt = 0;
  string maxStr;
  
  cin >> word;
  maxStr = word;
  maxCnt++;
  
  while (cin >> word) {
    if (word == last) {
      lastCnt++;
    } else {
      if (lastCnt > maxCnt) {
	maxStr = last;
	maxCnt = lastCnt;
      }
      last = word;
      lastCnt = 1;
    }
  }
  
  cout << maxStr << " times: " << maxCnt << endl;
  
  return 0;
}
