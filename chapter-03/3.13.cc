#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
  vector<int> vi;
  int i;
  while (cin >> i) {
    vi.push_back(i);
  }

  cout << endl;
  for (vector<int>::size_type idx = 0; idx * 2 < vi.size(); ++idx) {
    cout << vi[idx * 2] + vi[idx * 2 + 1] << "\t";
  }
  if (vi.size() % 2 == 1) {
    cout << vi[vi.size() / 2];
  }
  cout << endl;
  
  for (vector<int>::size_type idx = 0; idx < vi.size() - idx; ++idx) {
    cout << vi[idx] + vi[vi.size() - idx] << "\t";
  }
  if (vi.size() % 2 == 1) {
    cout << vi[vi.size() / 2];
  }
  cout << endl;
  return 0;
  
}
