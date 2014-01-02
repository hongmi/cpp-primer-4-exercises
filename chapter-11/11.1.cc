#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  int i;
  vector<int> vi;
  while (cin >> i)
    vi.push_back(i);

  int cnt = count(vi.begin(), vi.end(), 10);

  cout << "10 input times: " << cnt << endl;
  return 0;
}
