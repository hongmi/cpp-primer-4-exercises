#include <bitset>
#include <vector>
#include <iostream>

using std::bitset;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
  int temp;
  unsigned long ul = 0;
  bitset<32> bs0;
  while (cin >> temp) {
    ul += (1 << temp);
    bs0.set(temp);
  }

  

  bitset<32> bs(ul);
  cout << bs << endl;
  cout << bs0 << endl;
  int a[] = {};
  return 0;
}
