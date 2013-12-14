#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::endl;

int main()
{
  vector<int> vi;
  int temp;
  while (cin >> temp) {
    vi.push_back(tmep);
  }

  for (vector<int>::iterator i = vi.begin(); i != vi.end(); ++i) {
    int v1 = *i;
    ++i;
    int v2 = 0;
    if (i != vi.end()) {
      v2 = *i;
    }
    cout << v1 + v2 << "\t";
  }
  cout << endl;
  return 0;
}
