#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;


int main()
{
  vector<int> vi(10, 3);
  for (vector<int>::iterator i = vi.begin();
       i != vi.end(); ++i) {
    cin >> *i;
    *i *= 2;
  }
  for (vector<int>::iterator i = vi.begin();
       i != vi.end(); ++i) {
    cout << *i << "\t";
  }
  cout << endl;
  return 0;
  
}
