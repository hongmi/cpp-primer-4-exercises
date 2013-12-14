#include <vector>
using std::vector;

int main()
{
  vector<int> vi;
  vector<int>::iterator mid = (vi.begin() + vi.end()) / 2;
  return 0;
}
